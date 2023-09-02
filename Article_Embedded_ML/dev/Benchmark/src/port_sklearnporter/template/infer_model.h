#if !defined(SVC) && !defined(ADABOOST) && !defined(NUSVC)
#define FEATURE_TYPE    float
#else
#define FEATURE_TYPE    double
#endif

FEATURE_TYPE *th_load_features();
void th_infer(void);
void th_results();