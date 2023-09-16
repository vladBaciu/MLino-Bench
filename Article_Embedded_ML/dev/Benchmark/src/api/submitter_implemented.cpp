#include <hardwareSerial.h>
#include <Arduino.h>
#include <stdarg.h>

#include "internally_implemented.h"
#include "submitter_implemented.h"

void th_printf(const char *fmt, ... ){
    static char print_buf[1024]; // resulting string limited to 1024 chars
    va_list args;
    va_start(args, fmt);
    int r = vsnprintf(print_buf, sizeof(print_buf), fmt, args);
    va_end(args);

    if (r > 0)
    {
      Serial.print(print_buf);
    }
}

void th_timestamp(void) {
  unsigned long microSeconds = 0ul;
  /* USER CODE 2 BEGIN */
  microSeconds = micros();
  /* USER CODE 2 END */
  /* This message must NOT be changed. */
  th_printf(EE_MSG_TIMESTAMP, microSeconds);
}

void th_timestamp_initialize(void) {
  /* USER CODE 1 BEGIN */
  // Setting up BOTH perf and energy here
  /* USER CODE 1 END */
  /* This message must NOT be changed. */
  th_printf(EE_MSG_TIMESTAMP_MODE);
  /* Always call the timestamp on initialize so that the open-drain output
     is set to "1" (so that we catch a falling edge) */
  th_timestamp();
}

void th_command_ready(char volatile *p_command) {
  p_command = p_command;
  ee_serial_command_parser_callback((char *)p_command);
}

char th_getchar()
{
    return Serial.read();
}

size_t th_strnlen(const char *str, size_t maxlen) {
  return strnlen(str, maxlen);
}

void th_final_initialize(void) {}
void th_pre() {}
void th_post() {}
