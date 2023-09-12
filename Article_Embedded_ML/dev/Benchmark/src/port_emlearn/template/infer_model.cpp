#include "internally_implemented.h"
#include "submitter_implemented.h"
#include "infer_model.h"
#include "model.h"

#define OUTPUT_SIZE         1 // for the moment

int model_output[OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

size_t th_load_features() {
  size_t bytes = ee_get_buffer(reinterpret_cast<uint8_t *>(input),
                               NUMBER_OF_FEATURES * sizeof(FEATURE_TYPE));
  if (bytes / sizeof(FEATURE_TYPE) != NUMBER_OF_FEATURES) {
    th_printf("Input db has %d elemented, expected %d\n", bytes / sizeof(FEATURE_TYPE),
              NUMBER_OF_FEATURES);

    return bytes;
  }
}

void th_infer() {
  size_t noOfFeatures = th_load_features();
  model_output[0] = model_predict(&input[0], (int32_t)noOfFeatures);
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