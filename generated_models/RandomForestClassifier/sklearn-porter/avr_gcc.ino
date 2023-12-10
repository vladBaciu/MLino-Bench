/* Project: avr_gcc */

/* Generated with uCMLPerf */
/* Include model file */
#include <Arduino.h>
#include "core_benchmark.h"
#include "specific_benchmark.h"

void setup() {
    Serial.begin(115200);
    ee_benchmark_initialize();
}

void loop() {
    int c;
    while (Serial.available() > 0)
    {
        c = th_getchar();
        ee_serial_callback(c);
    }
}
