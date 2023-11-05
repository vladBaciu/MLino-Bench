#ifndef INFER_MODEL_H
#define INFER_MODEL_H

#include "model.h"
#include "feature_specific.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TH_VENDOR_NAME_STRING "emlearn"
#define TH_MODEL_VERSION "emlearn"

int model_output[OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

static inline void th_infer(void){model_output[0] = model_predict(&input[0], NUMBER_OF_FEATURES);}

#ifdef __cplusplus
} // extern "C"
#endif

#endif // INFER_MODEL_H