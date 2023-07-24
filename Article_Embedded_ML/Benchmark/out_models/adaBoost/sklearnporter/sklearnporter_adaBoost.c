#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double *predict_0(double features[]) {
    double *classes = malloc(sizeof(double) * 3);
    if (features[3] <= 0.800000011920929) {
        classes[0] = 0.333333333333333; 
        classes[1] = 0.0; 
        classes[2] = 0.0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 4.950000047683716) {
                if (features[3] <= 1.6500000357627869) {
                    classes[0] = 0.0; 
                    classes[1] = 0.313333333333333; 
                    classes[2] = 0.0; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 0.0; 
                    classes[2] = 0.006666666666666667; 
                }
            } else {
                if (features[3] <= 1.550000011920929) {
                    classes[0] = 0.0; 
                    classes[1] = 0.0; 
                    classes[2] = 0.02; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 0.013333333333333334; 
                    classes[2] = 0.006666666666666667; 
                }
            }
        } else {
            if (features[2] <= 4.8500001430511475) {
                if (features[0] <= 5.950000047683716) {
                    classes[0] = 0.0; 
                    classes[1] = 0.006666666666666667; 
                    classes[2] = 0.0; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 0.0; 
                    classes[2] = 0.013333333333333334; 
                }
            } else {
                classes[0] = 0.0; 
                classes[1] = 0.0; 
                classes[2] = 0.2866666666666664; 
            }
        }
    }
    return classes;
}

double *predict_1(double features[]) {
    double *classes = malloc(sizeof(double) * 3);
    if (features[2] <= 5.1499998569488525) {
        if (features[2] <= 2.449999988079071) {
            classes[0] = 8.32907244640284e-05; 
            classes[1] = 0.0; 
            classes[2] = 0.0; 
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 4.950000047683716) {
                    classes[0] = 0.0; 
                    classes[1] = 1.6658144892805682e-06; 
                    classes[2] = 1.6658144892805682e-06; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 0.49995419010154496; 
                    classes[2] = 3.3316289785611363e-06; 
                }
            } else {
                if (features[1] <= 3.149999976158142) {
                    classes[0] = 0.0; 
                    classes[1] = 0.0; 
                    classes[2] = 1.9989773871366814e-05; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 1.6658144892805682e-06; 
                    classes[2] = 1.6658144892805682e-06; 
                }
            }
        }
    } else {
        classes[0] = 0.0; 
        classes[1] = 0.0; 
        classes[2] = 0.4999325345131842; 
    }
    return classes;
}

double *predict_2(double features[]) {
    double *classes = malloc(sizeof(double) * 3);
    if (features[3] <= 1.550000011920929) {
        if (features[2] <= 4.950000047683716) {
            if (features[3] <= 0.800000011920929) {
                classes[0] = 2.6788177186451792e-08; 
                classes[1] = 0.0; 
                classes[2] = 0.0; 
            } else {
                classes[0] = 0.0; 
                classes[1] = 0.00018473109499329488; 
                classes[2] = 0.0; 
            }
        } else {
            classes[0] = 0.0; 
            classes[1] = 0.0; 
            classes[2] = 0.49969664310232625; 
        }
    } else {
        if (features[2] <= 5.1499998569488525) {
            if (features[3] <= 1.8499999642372131) {
                if (features[0] <= 5.400000095367432) {
                    classes[0] = 0.0; 
                    classes[1] = 0.0; 
                    classes[2] = 0.00011147301524887026; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 0.49973485750206614; 
                    classes[2] = 2.6788177186451756e-09; 
                }
            } else {
                classes[0] = 0.0; 
                classes[1] = 0.0; 
                classes[2] = 0.00011147676559367639; 
            }
        } else {
            classes[0] = 0.0; 
            classes[1] = 0.0; 
            classes[2] = 0.00016078905277695348; 
        }
    }
    return classes;
}

double *predict_3(double features[]) {
    double *classes = malloc(sizeof(double) * 3);
    if (features[3] <= 1.75) {
        if (features[3] <= 1.550000011920929) {
            if (features[2] <= 4.950000047683716) {
                if (features[3] <= 0.800000011920929) {
                    classes[0] = 9.257653973762734e-11; 
                    classes[1] = 0.0; 
                    classes[2] = 0.0; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 6.384072136521275e-07; 
                    classes[2] = 0.0; 
                }
            } else {
                classes[0] = 0.0; 
                classes[1] = 0.0; 
                classes[2] = 0.0017268881646907192; 
            }
        } else {
            if (features[0] <= 6.949999809265137) {
                if (features[1] <= 2.600000023841858) {
                    classes[0] = 0.0; 
                    classes[1] = 0.0; 
                    classes[2] = 3.852365897848193e-07; 
                } else {
                    classes[0] = 0.0; 
                    classes[1] = 0.4990242342550203; 
                    classes[2] = 0.0; 
                }
            } else {
                classes[0] = 0.0; 
                classes[1] = 0.0; 
                classes[2] = 5.556073060838475e-07; 
            }
        }
    } else {
        if (features[1] <= 3.149999976158142) {
            classes[0] = 0.0; 
            classes[1] = 0.0; 
            classes[2] = 0.49913557364140265; 
        } else {
            if (features[2] <= 4.950000047683716) {
                classes[0] = 0.0; 
                classes[1] = 0.00011133933639195673; 
                classes[2] = 0.0; 
            } else {
                classes[0] = 0.0; 
                classes[1] = 0.0; 
                classes[2] = 3.852588081543566e-07; 
            }
        }
    }
    return classes;
}

int predict(double features[]) {
    int i, j;
    int n_estimators = 4;
    int n_classes = 3;

    double *preds[n_estimators];
    preds[0] = predict_0(features);
    preds[1] = predict_1(features);
    preds[2] = predict_2(features);
    preds[3] = predict_3(features);

    double normalizer, sum;
    for (i = 0; i < n_estimators; i++) {
        normalizer = 0.;
        for (j = 0; j < n_classes; j++) {
            normalizer += preds[i][j];
        }
        if (normalizer == 0.) {
            normalizer = 1.;
        }
        for (j = 0; j < n_classes; j++) {
            preds[i][j] = preds[i][j] / normalizer;
            if (preds[i][j] <= 2.2204460492503131e-16) {
                preds[i][j] = 2.2204460492503131e-16;
            }
            preds[i][j] = log(preds[i][j]);
        }
        sum = 0.;
        for (j = 0; j < n_classes; j++) {
            sum += preds[i][j];
        }
        for (j = 0; j < n_classes; j++) {
            preds[i][j] = (n_classes - 1) * (preds[i][j] - (1. / n_classes) * sum);
        }
    }

    double classes[n_classes];
    for (i = 0; i < n_classes; i++) {
        classes[i] = 0.;
    }
    for (i = 0; i < n_estimators; i++) {
        for (j = 0; j < n_classes; j++) {
            classes[j] += preds[i][j];
        }
    }

    int class_idx = 0;
    double class_val = classes[0];
    for (i = 1; i < n_classes; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int main(int argc, const char * argv[]) {

    /* Features: */
    double features[argc-1];
    int i;
    for (i = 1; i < argc; i++) {
        features[i-1] = atof(argv[i]);
    }

    /* Prediction: */
    printf("%d", predict(features));
    return 0;

}