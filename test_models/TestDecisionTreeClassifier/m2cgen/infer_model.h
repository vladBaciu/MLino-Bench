#ifndef INFER_MODEL_H
#define INFER_MODEL_H

#include "feature_specific.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TH_VENDOR_NAME_STRING "m2cgen"
#define TH_MODEL_VERSION "m2cgen"

int model_output[OUTPUT_SIZE] = {0UL};
double output[PY_OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

void predict(double * input, double * output);

static inline void th_initModel(void) {}
static inline void th_infer(void)
{
    predict(&input[0], &output[0]);
#if defined(SVC) || defined(LINEARSVC) || defined(NUSVC)
    uint8_t thValue = 0U;
    uint8_t maxIdx = 0U;

    thValue = output[0];
    /* Determine model_output from output encoded value. */
    for(uint8_t i = 1; i < PY_OUTPUT_SIZE; i++)
    {
        #if defined(LINEARSVC)
        if(output[i] > thValue)
        #else
        if(output[i] < thValue)
        #endif
        {
            thValue = output[i];
            maxIdx = i;
        }
    }
    model_output[0] = maxIdx;
#else
    for(uint8_t i = 0; i < PY_OUTPUT_SIZE; i++)
    {
        if(output[i] == 1)
        {
            model_output[0] = i;
            break;
        }
    }
#endif /* defined(SVC) || defined(LINEARSVC) || defined(NUSVC) */

}

#ifdef __cplusplus
} // extern "C"
#endif

#endif // INFER_MODEL_H