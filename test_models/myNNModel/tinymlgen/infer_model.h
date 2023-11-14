#ifndef INFER_MODEL_H
#define INFER_MODEL_H

#include "EloquentTinyML.h"
#include "model.h"
#include "feature_specific.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TH_VENDOR_NAME_STRING "tinyml"
#define TH_MODEL_VERSION      "tinyml"

#define TENSOR_ARENA_SIZE   (8*1024)
Eloquent::TinyML::TensorFlow::TensorFlow<NUMBER_OF_FEATURES, PY_OUTPUT_SIZE, TENSOR_ARENA_SIZE> tinymlgen;


int model_output[OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

static inline void th_initModel(void) {tinymlgen.begin(tinymlgen_model);}
static inline void th_infer(void){model_output[0] = tinymlgen.predictClass(&input[0]);}

#ifdef __cplusplus
} // extern "C"
#endif

#endif // INFER_MODEL_H