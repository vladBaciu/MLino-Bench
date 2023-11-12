#ifndef INFER_MODEL_H
#define INFER_MODEL_H

#include "model.h"
#include "feature_specific.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TH_VENDOR_NAME_STRING "sklearnporter"
#define TH_MODEL_VERSION "sklearnporter"

int model_output[OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

static inline void th_initModel(void) {}
static inline void th_infer(void){model_output[0] = predict(&input[0]);}

#ifdef __cplusplus
} // extern "C"
#endif

#endif // INFER_MODEL_H