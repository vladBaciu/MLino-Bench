#if !defined(SVC) && !defined(ADABOOST) && !defined(NUSVC)
#define FEATURE_TYPE    float
#else
#define FEATURE_TYPE    double
#endif

size_t th_load_features();
void th_infer(void);
void th_results();