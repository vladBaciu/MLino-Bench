#include <string.h>
void predict(double * input, double * output) {
    double var0[3];
    if ((input[3]) <= (0.3527105003595352)) {
        if ((input[2]) <= (-0.9850428998470306)) {
            memcpy(var0, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
        } else {
            memcpy(var0, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        }
    } else {
        memcpy(var0, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
    }
    memcpy(output, var0, 3 * sizeof(double));
}
