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
                        if (x[3] <= 0.800000011920929) {
                            return 0;
                        }

                        else {
                            if (x[2] <= 4.75) {
                                if (x[3] <= 1.6500000357627869) {
                                    return 1;
                                }

                                else {
                                    return 2;
                                }
                            }

                            else {
                                if (x[3] <= 1.75) {
                                    if (x[2] <= 4.950000047683716) {
                                        return 1;
                                    }

                                    else {
                                        if (x[3] <= 1.550000011920929) {
                                            return 2;
                                        }

                                        else {
                                            if (x[2] <= 5.450000047683716) {
                                                return 1;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 4.8500001430511475) {
                                        if (x[0] <= 5.950000047683716) {
                                            return 1;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }

                                    else {
                                        return 2;
                                    }
                                }
                            }
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