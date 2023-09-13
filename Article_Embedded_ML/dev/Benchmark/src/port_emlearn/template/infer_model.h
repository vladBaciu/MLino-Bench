#define TH_VENDOR_NAME_STRING "emlearn"
#define TH_MODEL_VERSION "emlearn"

#define FEATURE_TYPE    float

size_t th_load_features();
void th_infer(void);
void th_results();