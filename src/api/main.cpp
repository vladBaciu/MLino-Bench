
/* Generated with uCMLPerf */
/* Include model file */
#include <Arduino.h>
#include "core_benchmark.h"
#include "specific_benchmark.h"

void setup() {

#ifdef USE_PROGAMMING_PORT
    SerialUSB.begin(115200);
#else
    Serial.begin(115200);
#endif

    ee_benchmark_initialize();
}

void loop() {
    int c;
#ifdef USE_PROGAMMING_PORT
    while (SerialUSB.available() > 0)
#else
    while (Serial.available() > 0)
#endif
    {
        c = th_getchar();
        ee_serial_callback(c);
    }
}
