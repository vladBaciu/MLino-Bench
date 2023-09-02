#include <hardwareSerial.h>
#include <Arduino.h>
#include <stdarg.h>

#include "model.h"
#include "internally_implemented.h"
#include "submitter_implemented.h"

void th_printf(const char *fmt, ... ){
    char buf[128]; // resulting string limited to 128 chars
    va_list args;
    va_start (args, fmt );
    vsnprintf(buf, 128, fmt, args);
    va_end (args);
    Serial.print(buf);
}

void th_timestamp(void) {
  unsigned long microSeconds = 0ul;
  /* USER CODE 2 BEGIN */
  microSeconds = millis();
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

/* custom */
void th_load_features() {
  int8_t input[3];

  size_t bytes = ee_get_buffer(reinterpret_cast<uint8_t *>(input),
                               3 * sizeof(int8_t));
  if (bytes / sizeof(int8_t) != 3) {
    th_printf("Input db has %d elemented, expected %d\n", bytes / sizeof(int8_t),
              3);
    return;
  }
}


// Add to this method to return real inference results.
void th_results() {
  const int nresults = 3;
  int results[nresults];
  /**
   * The results need to be printed back in exactly this format; if easier
   * to just modify this loop than copy to results[] above, do that.
   */
  th_printf("m-results-[");
  for (size_t i = 0; i < nresults; i++) {
    /* N.B. Be sure %f is enabled in SDK */
    th_printf("%.3f", results[i]);
    if (i < (nresults - 1)) {
      th_printf(",");
    }
  }
  th_printf("]\r\n");
}

void th_infer() {
  #if !defined(SVC) && !defined(ADABOOST) && !defined(NUSVC)
  float features[10] = { 1, 4, 5, 3,2,1, 5};
  #else
  double features[10] = { 1, 4, 5, 3,2,1, 5};
  #endif
  int ans = predict(features);
  th_printf("%d", ans);
}

