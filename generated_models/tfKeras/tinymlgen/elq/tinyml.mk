LOCAL_CPP_SRCS   += internally_implemented.cpp
LOCAL_CPP_SRCS   += submitter_implemented.cpp

LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/core/api/*.cpp)
LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/experimental/microfrontend/lib/*.cpp)

LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/kernels/*.cpp)
LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/kernels/internal/*.cpp)

LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/micro/*.cpp)
LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/micro/kernels/*.cpp)
LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/micro/kernels/cmsis-nn/*.cpp)
LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/micro/arduino/*.cpp)
LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/micro/memory_planner/*.cpp)

LOCAL_CPP_SRCS   += $(wildcard elq/tfl/arm/tensorflow/lite/schema/*.cpp)

LOCAL_C_SRCS     += $(wildcard elq/tfl/arm/tensorflow/lite/c/*.c)
LOCAL_C_SRCS     += $(wildcard elq/tfl/arm/tensorflow/lite/experimental/microfrontend/lib/*.c)
LOCAL_C_SRCS     += $(wildcard elq/tfl/arm/tensorflow/lite/micro/tools/cmsis/CMSIS/NN/Source/*/*.c)
LOCAL_C_SRCS     += $(wildcard elq/tfl/arm/tensorflow/lite/micro/tools/kissfft/*.c)