#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N_FEATURES 4
#define N_CLASSES 3
#define N_VECTORS 25
#define N_ROWS 3
#define N_COEFFICIENTS 2
#define N_INTERCEPTS 3
#define KERNEL_TYPE 'l'
#define KERNEL_GAMMA 0.05
#define KERNEL_COEF 0.0
#define KERNEL_DEGREE 3

double vectors[25][4] = {{4.8, 3.4, 1.9, 0.2}, {5.1, 3.3, 1.7, 0.5}, {4.5, 2.3, 1.3, 0.3}, {5.6, 3.0, 4.5, 1.5}, {5.4, 3.0, 4.5, 1.5}, {6.7, 3.0, 5.0, 1.7}, {5.9, 3.2, 4.8, 1.8}, {5.1, 2.5, 3.0, 1.1}, {6.0, 2.7, 5.1, 1.6}, {6.3, 2.5, 4.9, 1.5}, {6.1, 2.9, 4.7, 1.4}, {6.5, 2.8, 4.6, 1.5}, {6.9, 3.1, 4.9, 1.5}, {6.3, 2.3, 4.4, 1.3}, {6.3, 2.5, 5.0, 1.9}, {6.3, 2.8, 5.1, 1.5}, {6.3, 2.7, 4.9, 1.8}, {6.0, 3.0, 4.8, 1.8}, {6.0, 2.2, 5.0, 1.5}, {6.2, 2.8, 4.8, 1.8}, {6.5, 3.0, 5.2, 2.0}, {7.2, 3.0, 5.8, 1.6}, {5.6, 2.8, 4.9, 2.0}, {5.9, 3.0, 5.1, 1.8}, {4.9, 2.5, 4.5, 1.7}};
double coefficients[2][25] = {{0.0, 0.6706161289986332, 0.07718560585286233, -0.0, -0.0, -0.0, -0.0, -0.7478017348514957, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.2036953954440741}, {0.15717604199669288, 0.046519353447381256, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.14836817496990626, -0.11329041272167077, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.7230533537105588, -0.31202440853767666, -1.0, -1.0}};
double intercepts[3] = {1.4533826924303648, 1.5053732767306245, 5.802879103928778};
int weights[3] = {3, 11, 11};

int predict (double features[]) {
    int i, j, k, d, l;

    double kernels[N_VECTORS];
    double kernel;
    switch (KERNEL_TYPE) {
        case 'l':
            // <x,x'>
            for (i = 0; i < N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += vectors[i][j] * features[j];
                }
                kernels[i] = kernel;
            }
            break;
        case 'p':
            // (y<x,x'>+r)^d
            for (i = 0; i < N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += vectors[i][j] * features[j];
                }
                kernels[i] = pow((KERNEL_GAMMA * kernel) + KERNEL_COEF, KERNEL_DEGREE);
            }
            break;
        case 'r':
            // exp(-y|x-x'|^2)
            for (i = 0; i < N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += pow(vectors[i][j] - features[j], 2);
                }
                kernels[i] = exp(-KERNEL_GAMMA * kernel);
            }
            break;
        case 's':
            // tanh(y<x,x'>+r)
            for (i = 0; i < N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += vectors[i][j] * features[j];
                }
                kernels[i] = tanh((KERNEL_GAMMA * kernel) + KERNEL_COEF);
            }
            break;
    }

    int starts[N_ROWS];
    int start;
    for (i = 0; i < N_ROWS; i++) {
        if (i != 0) {
            start = 0;
            for (j = 0; j < i; j++) {
                start += weights[j];
            }
            starts[i] = start;
        } else {
            starts[0] = 0;
        }
    }

    int ends[N_ROWS];
    for (i = 0; i < N_ROWS; i++) {
        ends[i] = weights[i] + starts[i];
    }

    if (N_CLASSES == 2) {

        for (i = 0; i < N_VECTORS; i++) {
            kernels[i] = -kernels[i];
        }

        double decision = 0.;
        for (k = starts[1]; k < ends[1]; k++) {
            decision += kernels[k] * coefficients[0][k];
        }
        for (k = starts[0]; k < ends[0]; k++) {
            decision += kernels[k] * coefficients[0][k];
        }
        decision += intercepts[0];

        if (decision > 0) {
            return 0;
        }
        return 1;

    }

    double decisions[N_INTERCEPTS];
    double tmp;
    for (i = 0, d = 0, l = N_ROWS; i < l; i++) {
        for (j = i + 1; j < l; j++) {
            tmp = 0.;
            for (k = starts[j]; k < ends[j]; k++) {
                tmp += kernels[k] * coefficients[i][k];
            }
            for (k = starts[i]; k < ends[i]; k++) {
                tmp += kernels[k] * coefficients[j - 1][k];
            }
            decisions[d] = tmp + intercepts[d];
            d = d + 1;
        }
    }

    int votes[N_INTERCEPTS];
    for (i = 0, d = 0, l = N_ROWS; i < l; i++) {
        for (j = i + 1; j < l; j++) {
            votes[d] = decisions[d] > 0 ? i : j;
            d = d + 1;
        }
    }

    int amounts[N_CLASSES];
    for (i = 0, l = N_CLASSES; i < l; i++) {
        amounts[i] = 0;
    }
    for (i = 0; i < N_INTERCEPTS; i++) {
        amounts[votes[i]] += 1;
    }

    int classVal = -1;
    int classIdx = -1;
    for (i = 0; i < N_CLASSES; i++) {
        if (amounts[i] > classVal) {
            classVal = amounts[i];
            classIdx= i;
        }
    }
    return classIdx;

}




int main(void) {
#if !defined(SVC) && !defined(ADABOOST) && !defined(NUSVC)
    float features[1];
#else
    double features[1];
#endif
    int result = predict(features);
    return result;
}
