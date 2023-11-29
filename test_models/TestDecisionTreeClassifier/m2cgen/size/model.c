#include <string.h>
void predict(double * input, double * output) {
    double var0[3];
    if ((input[3]) <= (0.800000011920929)) {
        memcpy(var0, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[2]) <= (4.75)) {
            if ((input[3]) <= (1.6500000357627869)) {
                memcpy(var0, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                memcpy(var0, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        } else {
            if ((input[3]) <= (1.75)) {
                if ((input[2]) <= (4.950000047683716)) {
                    memcpy(var0, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if ((input[3]) <= (1.550000011920929)) {
                        memcpy(var0, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        if ((input[0]) <= (6.949999809265137)) {
                            memcpy(var0, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var0, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[2]) <= (4.8500001430511475)) {
                    if ((input[1]) <= (3.100000023841858)) {
                        memcpy(var0, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            }
        }
    }
    memcpy(output, var0, 3 * sizeof(double));
}


int main(void) {
    double input[5];
    double output[5];

    predict(input, output);
}
