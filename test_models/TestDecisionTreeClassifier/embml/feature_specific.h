#if PCA_FEATURES_ENABLED
#include "pca.h"
#endif /* PCA_FEATURES_ENABLED */

#ifdef FIXED_FBITS
#define CONVERT_TO_FIXED_POINT
#endif

#define USE_INSTANCE_BUFFER
#define OUTPUT_SIZE         1 // for the moment
#define FEATURE_TYPE    float
