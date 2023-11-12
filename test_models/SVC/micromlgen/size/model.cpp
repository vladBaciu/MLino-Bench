#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#pragma once
#include <stdarg.h>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float kernels[25] = { 0 };
                        float decisions[3] = { 0 };
                        int votes[3] = { 0 };
                        kernels[0] = compute_kernel(x,   4.8  , 3.4  , 1.9  , 0.2 );
                        kernels[1] = compute_kernel(x,   5.1  , 3.3  , 1.7  , 0.5 );
                        kernels[2] = compute_kernel(x,   4.5  , 2.3  , 1.3  , 0.3 );
                        kernels[3] = compute_kernel(x,   5.6  , 3.0  , 4.5  , 1.5 );
                        kernels[4] = compute_kernel(x,   5.4  , 3.0  , 4.5  , 1.5 );
                        kernels[5] = compute_kernel(x,   6.7  , 3.0  , 5.0  , 1.7 );
                        kernels[6] = compute_kernel(x,   5.9  , 3.2  , 4.8  , 1.8 );
                        kernels[7] = compute_kernel(x,   5.1  , 2.5  , 3.0  , 1.1 );
                        kernels[8] = compute_kernel(x,   6.0  , 2.7  , 5.1  , 1.6 );
                        kernels[9] = compute_kernel(x,   6.3  , 2.5  , 4.9  , 1.5 );
                        kernels[10] = compute_kernel(x,   6.1  , 2.9  , 4.7  , 1.4 );
                        kernels[11] = compute_kernel(x,   6.5  , 2.8  , 4.6  , 1.5 );
                        kernels[12] = compute_kernel(x,   6.9  , 3.1  , 4.9  , 1.5 );
                        kernels[13] = compute_kernel(x,   6.3  , 2.3  , 4.4  , 1.3 );
                        kernels[14] = compute_kernel(x,   6.3  , 2.5  , 5.0  , 1.9 );
                        kernels[15] = compute_kernel(x,   6.3  , 2.8  , 5.1  , 1.5 );
                        kernels[16] = compute_kernel(x,   6.3  , 2.7  , 4.9  , 1.8 );
                        kernels[17] = compute_kernel(x,   6.0  , 3.0  , 4.8  , 1.8 );
                        kernels[18] = compute_kernel(x,   6.0  , 2.2  , 5.0  , 1.5 );
                        kernels[19] = compute_kernel(x,   6.2  , 2.8  , 4.8  , 1.8 );
                        kernels[20] = compute_kernel(x,   6.5  , 3.0  , 5.2  , 2.0 );
                        kernels[21] = compute_kernel(x,   7.2  , 3.0  , 5.8  , 1.6 );
                        kernels[22] = compute_kernel(x,   5.6  , 2.8  , 4.9  , 2.0 );
                        kernels[23] = compute_kernel(x,   5.9  , 3.0  , 5.1  , 1.8 );
                        kernels[24] = compute_kernel(x,   4.9  , 2.5  , 4.5  , 1.7 );
                        decisions[0] = 1.45338269243
                        + kernels[1] * 0.670616128999
                        + kernels[2] * 0.077185605853
                        + kernels[7] * -0.747801734851
                        ;
                        decisions[1] = 1.505373276731
                        + kernels[0] * 0.157176041997
                        + kernels[1] * 0.046519353447
                        + kernels[24] * -0.203695395444
                        ;
                        decisions[2] = 5.802879103929
                        + kernels[3]
                        + kernels[4]
                        + kernels[5]
                        + kernels[6]
                        + kernels[8]
                        + kernels[9]
                        + kernels[10]
                        + kernels[11]
                        + kernels[12]
                        + kernels[13] * 0.14836817497
                        + kernels[14] * -0.113290412722
                        - kernels[15]
                        - kernels[16]
                        - kernels[17]
                        - kernels[18]
                        - kernels[19]
                        - kernels[20]
                        + kernels[21] * -0.723053353711
                        + kernels[22] * -0.312024408538
                        - kernels[23]
                        - kernels[24]
                        ;
                        votes[decisions[0] > 0 ? 0 : 1] += 1;
                        votes[decisions[1] > 0 ? 0 : 2] += 1;
                        votes[decisions[2] > 0 ? 1 : 2] += 1;
                        int val = votes[0];
                        int idx = 0;

                        for (int i = 1; i < 3; i++) {
                            if (votes[i] > val) {
                                val = votes[i];
                                idx = i;
                            }
                        }

                        return idx;
                    }

                protected:
                    /**
                    * Compute kernel between feature vector and support vector.
                    * Kernel type: linear
                    */
                    float compute_kernel(float *x, ...) {
                        va_list w;
                        va_start(w, 4);
                        float kernel = 0.0;

                        for (uint16_t i = 0; i < 4; i++) {
                            kernel += x[i] * va_arg(w, double);
                        }

                        return kernel;
                    }
                };
            }
        }
    }
int main(void) {
    float features[1];
    Eloquent::ML::Port::SVM classifier;
    int result = classifier.predict(features);
    return result;
}
