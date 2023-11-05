#include <hardwareSerial.h>
#include <Arduino.h>
#include <stdarg.h>

#include "internally_implemented.h"
#include "submitter_implemented.h"
#include "feature_specific.h"

extern FEATURE_TYPE input[NUMBER_OF_FEATURES];
extern int model_output[OUTPUT_SIZE];

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

size_t th_load_features() {
  size_t bytes = ee_get_buffer(reinterpret_cast<uint8_t *>(input),
                               NUMBER_OF_FEATURES * sizeof(FEATURE_TYPE));
  if (bytes / sizeof(FEATURE_TYPE) != NUMBER_OF_FEATURES) {
    th_printf("Input db has %d elemented, expected %d\n", bytes / sizeof(FEATURE_TYPE),
              NUMBER_OF_FEATURES);

    return bytes;
  }
}

void th_results() {
  /**
   * The results need to be printed back in exactly this format; if easier
   * to just modify this loop than copy to results[] above, do that.
   */
  th_printf("m-results-[");
  for (size_t i = 0; i < OUTPUT_SIZE; i++) {
    /* N.B. Be sure %f is enabled in SDK */
    th_printf("%d", model_output[i]);
    if (i < (OUTPUT_SIZE - 1)) {
      th_printf(",");
    }
  }
  th_printf("]\r\n");
}

void th_final_initialize(void) {}
void th_pre() {}
void th_post() {}
