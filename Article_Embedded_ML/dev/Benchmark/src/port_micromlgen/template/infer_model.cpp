#include <math.h>
#include "internally_implemented.h"
#include "submitter_implemented.h"
#include "infer_model.h"
#include "model.h"

#define OUTPUT_SIZE         1 // for the moment

int model_output[OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

#if defined(RANDOM_FOREST)
    Eloquent::ML::Port::RandomForest classifier;
#elif defined(SVC)
    Eloquent::ML::Port::SVM classifier;
#elif defined(DECISION_TREE)
    Eloquent::ML::Port::DecisionTree classifier;
#elif defined(GAUSSIAN_NAIVE_BAYES)
    Eloquent::ML::Port::GaussianNB classifier;
#elif defined(XGBOOST)
    Eloquent::ML::Port::XGBClassifier classifier;
#endif

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

  (void)noOfFeatures;

  model_output[0] = classifier.predict(&input[0]);
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