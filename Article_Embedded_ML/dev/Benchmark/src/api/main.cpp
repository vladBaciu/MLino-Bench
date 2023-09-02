
/* Generated with uCMLPerf */
/* Include model file */
#include <Arduino.h>
#include "internally_implemented.h"
#include "submitter_implemented.h"

void setup() {
    Serial.begin(9600);
    ee_benchmark_initialize();
}

void loop() {
    int c;
    c = th_getchar();
    ee_serial_callback(c);
}
