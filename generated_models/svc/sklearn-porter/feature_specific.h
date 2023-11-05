#define OUTPUT_SIZE         1 // for the moment

#if !defined(SVC) && !defined(ADABOOST) && !defined(NUSVC)
#define FEATURE_TYPE    float
#else
#define FEATURE_TYPE    double
#endif