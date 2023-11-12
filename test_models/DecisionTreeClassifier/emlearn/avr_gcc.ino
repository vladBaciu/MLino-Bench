/* Project: avr_gcc */

/* Generated with uCMLPerf */
/* Include model file */
#include <Arduino.h>
#include "internally_implemented.h"
#include "submitter_implemented.h"

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
