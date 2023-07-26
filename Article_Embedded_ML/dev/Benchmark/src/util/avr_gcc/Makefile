TARGET=$(MODEL_PATH)
MMCU=atmega328p
F_CPU = 20000000

CFLAGS=-mmcu=$(MMCU) -Wall -Os -DF_CPU=$(F_CPU)

LDFLAGS = -Wl,-Map=$(TARGET).map,--cref
LDFLAGS += $(patsubst %,-L%,$(EXTRALIBDIRS))
LDFLAGS += $(PRINTF_LIB) $(SCANF_LIB) -lm

CC = avr-gcc
OBJCOPY = avr-objcopy
OBJDUMP = avr-objdump
SIZE = avr-size


all: $(TARGET).elf $(TARGET).hex

$(TARGET).out: $(TARGET).c
	@$(CC) -c $(CFLAGS) -I./ -o $(TARGET).out $(TARGET).c
	$(info Building model source file...: $(TARGET).c)

$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -O ihex -R .eeprom -R .fuse -R .lock -R .signature $(TARGET).elf $(TARGET).hex
	$(SIZE) --mcu=$(MMCU) --format=avr $(TARGET).out
	$(info Generating hex binary file...: $(TARGET).hex)

$(TARGET).elf: $(TARGET).out
	$(CC) $(CFLAGS) $(TARGET).out -o $(TARGET).elf $(LDFLAGS)
	$(info Generate elf file...: $(TARGET).c)

gccversion :
	@$(CC) --version

clean:
	@rm -f $(TARGET).hex
	@rm -f $(TARGET).elf
	@rm -f $(TARGET).out
	@rm -f $(TARGET).map

# Targets used for flashing the MCU with different programmers
program-bsd: $(TARGET).hex
	avrdude -p t44 -c bsd -U flash:w:$(TARGET).c.hex

program-dasa: $(TARGET).hex
	avrdude -p t44 -P /dev/ttyUSB0 -c dasa -U flash:w:$(TARGET).c.hex

program-avrisp2: $(TARGET).hex
	avrdude -p t44 -P usb -c avrisp2 -U flash:w:$(TARGET).c.hex

program-avrisp2-fuses: $(TARGET).hex
	avrdude -p t44 -P usb -c avrisp2 -U lfuse:w:0x5E:m

program-usbtiny: $(TARGET).hex
	avrdude -p t44 -P usb -c usbtiny -U flash:w:$(TARGET).c.hex

program-usbtiny-fuses: $(TARGET).hex
	avrdude -p t44 -P usb -c usbtiny -U lfuse:w:0x5E:m

program-dragon: $(TARGET).hex
	avrdude -p t44 -P usb -c dragon_isp -U flash:w:$(TARGET).c.hex