#ifndef INFER_MODEL_H
#define INFER_MODEL_H

#include "feature_specific.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TH_VENDOR_NAME_STRING "sklearnporter"
#define TH_MODEL_VERSION "sklearnporter"

int model_output[OUTPUT_SIZE] = {0UL};
double output[PY_OUTPUT_SIZE] = {0UL};
FEATURE_TYPE input[NUMBER_OF_FEATURES] = {0U};

void predict(double * input, double * output);

static inline void th_infer(void)
{
    predict(&input[0], &output[0]);

    /* Determine model_output from output encoded value. */
    for(uint8_t i = 0; i < PY_OUTPUT_SIZE; i++)
    {
        if(output[i] == 1)
        {
            model_output[0] = i;
            break;
        }
    }
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif // INFER_MODEL_H