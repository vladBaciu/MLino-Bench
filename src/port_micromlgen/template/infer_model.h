#ifndef INFER_MODEL_H
#define INFER_MODEL_H

#include "model.h"
#include "feature_specific.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TH_VENDOR_NAME_STRING "micromlgen"
#define TH_MODEL_VERSION "micromlgen"

int model_output[OUTPUT_SIZE];
FEATURE_TYPE input[NUMBER_OF_FEATURES];

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
#elif defined(SEFR_CLASSIFIER)
Eloquent::ML::Port::SEFR classifier;
#endif

static inline void th_initModel(void) {}
static inline void th_infer(){model_output[0] = classifier.predict(&input[0]);}

#ifdef __cplusplus
} // extern "C"
#endif

#endif // INFER_MODEL_H