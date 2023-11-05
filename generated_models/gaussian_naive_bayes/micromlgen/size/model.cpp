#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#pragma once
#include <stdarg.h>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class GaussianNB {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[3] = { 0.0f };
                        float theta[4] = { 0 };
                        float sigma[4] = { 0 };
                        theta[0] = 4.969230769231; theta[1] = 3.430769230769; theta[2] = 1.453846153846; theta[3] = 0.24358974359;
                        sigma[0] = 0.122130180608; sigma[1] = 0.147258385736; sigma[2] = 0.031715979424; sigma[3] = 0.010151219398;
                        votes[0] = 0.348214285714 - gauss(x, theta, sigma);
                        theta[0] = 5.925714285714; theta[1] = 2.782857142857; theta[2] = 4.248571428571; theta[3] = 1.317142857143;
                        sigma[0] = 0.266481635746; sigma[1] = 0.101420411256; sigma[2] = 0.189926533705; sigma[3] = 0.037991839828;
                        votes[1] = 0.3125 - gauss(x, theta, sigma);
                        theta[0] = 6.518421052632; theta[1] = 2.965789473684; theta[2] = 5.481578947368; theta[3] = 2.0;
                        sigma[0] = 0.376239615281; sigma[1] = 0.081198064035; sigma[2] = 0.279397510018; sigma[3] = 0.067894739935;
                        votes[2] = 0.339285714286 - gauss(x, theta, sigma);
                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                    /**
                    * Compute gaussian value
                    */
                    float gauss(float *x, float *theta, float *sigma) {
                        float gauss = 0.0f;

                        for (uint16_t i = 0; i < 4; i++) {
                            gauss += log(sigma[i]);
                            gauss += abs(x[i] - theta[i]) / sigma[i];
                        }

                        return gauss;
                    }
                };
            }
        }
    }

int main(void) {
    float features[1];
    Eloquent::ML::Port::GaussianNB classifier;
    int result = classifier.predict(features);
    return result;
}
