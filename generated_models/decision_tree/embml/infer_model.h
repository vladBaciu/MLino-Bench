#ifndef INFER_MODEL_H
#define INFER_MODEL_H

#include "model.h"
#include "feature_specific.h"

#ifndef FIXED_FBITS
/* If no fixed number, then is float. */
typedef float FixedNum;
#endif


#ifdef __cplusplus
extern "C" {
#endif

#define TH_VENDOR_NAME_STRING "embml"
#define TH_MODEL_VERSION "embml"

int model_output[OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

#if !defined(SKLEARN_MLP) && !defined(SVC)
static inline void th_infer(void){model_output[0] = classify();}
#else
static inline void th_infer(void){
    initConnections();
    model_output[0] = classify();
}
#endif

#ifdef CONVERT_TO_FIXED_POINT
static inline FixedNum ftype_to_fixed(FEATURE_TYPE input)
{
    return (FixedNum)(round(input * (1 << FIXED_FBITS)));
}
#endif /* CONVERT_TO_FIXED_POINT */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // INFER_MODEL_H