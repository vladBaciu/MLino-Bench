#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#pragma once
#include <stdarg.h>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[3] <= 0.3527105003595352) {
                            if (x[3] <= -0.8793604373931885) {
                                return 0;
                            }

                            else {
                                return 1;
                            }
                        }

                        else {
                            return 2;
                        }
                    }

                protected:
                };
            }
        }
    }
int main(void) {
    float features[1];
    Eloquent::ML::Port::DecisionTree classifier;
    int result = classifier.predict(features);
    return result;
}
