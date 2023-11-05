#include <stdlib.h>
#include <stdint.h>
#include <math.h>


#define NUM_CLASSES 3
#define INPUT_SIZE 4
#define GAMMA 0.0500000000
#define COEF0 0.0
#define DEGREE 3
#define N_CLASS 3
#define NR_CLASS 3
#define MODEL_L 13

float instance[INPUT_SIZE + 1];

const float *dual_coef[NR_CLASS - 1];

const float dual_coef_0[4] = {0.6445230910596815, 0.12076624462789064, -0.7652893356875723, -0.2535341844360599};

const float dual_coef_1[11] = {0.20102711355400768, 0.052507070882052226, 1.0, 1.0, 0.20047396337718063, 1.0, 0.26562681119041437, -1.0, -0.466100774567595, -1.0, -1.0};

const float support_vectors[MODEL_L][INPUT_SIZE] = {{-1.886566959585323, -1.7237435615626553, -1.717719421385155, -1.4591585626303187}, {-1.1336134058705611, 1.7737071430572262, -1.5956066663103807, -1.3142090365412142}, {-0.757136629013179, 1.0242534206386797, -1.4734939112356067, -1.6041080887194232}, {0.12130918365404282, 0.02498179074728544, 0.29714103734861663, 0.1352862243498301}, {-0.631644370060719, -0.9742898391441088, 0.17502828227384304, -0.15461282782837876}, {-0.5061521111082591, 0.02498179074728544, -0.008140850338318458, -0.009663301739274176}, {-1.3845979237754809, -1.4739256540898065, -0.49659187063741456, -0.4445118800065876}, {1.1252472552737267, 0.2747996982201343, 0.48031016996077813, 0.28023575043893467}, {0.3722937015589638, -1.7237435615626553, 0.17502828227384304, -0.009663301739274176}, {1.5017240321311078, 0.02498179074728544, 1.029817567797261, 0.4251852765280392}, {0.6232782194638848, 0.02498179074728544, 0.8466484351851, 0.715084328706248}, {-0.12967533425087704, 0.02498179074728544, 0.6024229250355517, 0.715084328706248}, {-1.3845979237754809, -1.2241077466169576, 0.23608465981122986, 0.5701348026171436}};

const int8_t end[NR_CLASS - 1][NR_CLASS + 1] = {{0, 2, 3, 4}, {0, 2, 7, 11}};

const int8_t *index_sv[NR_CLASS - 1];

const int8_t index_sv_0[4] = {0, 2, 6, 12};

const int8_t index_sv_1[11] = {0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 12};

const float intercept[N_CLASS] = {-1.938333349567525, -0.6469776063272282, 1.1404719251850963};

const int8_t classes[NUM_CLASSES] = {0, 1, 2};


float k_function(const float *y){
	float sum = 0.0;
	for (int i = 0; i < INPUT_SIZE; i++){
		sum += instance[i] * y[i];
	}
	return sum;
}
int classify(){
	float k_value[MODEL_L];
	for (int i = 0; i < MODEL_L; i++){
		k_value[i] = k_function(support_vectors[i]);
	}
	int8_t vote[NR_CLASS] = {0};
	int8_t p = 0;
	for (int i = 0; i < NR_CLASS - 1; i++){
		for (int j = i + 1; j < NR_CLASS; j++){
			float sum = 0.0;
			for (int k = end[j - 1][i]; k < end[j - 1][i + 1]; k++){
				sum += dual_coef[j - 1][k] * k_value[index_sv[j - 1][k]];
			}
			for (int k = end[i][j]; k < end[i][j + 1]; k++){
				sum += dual_coef[i][k] * k_value[index_sv[i][k]];
			}
			sum += intercept[p++];
			if (sum > 0){
				vote[i]++;
			}
			else {
				vote[j]++;
			}
		}
	}
	int indMax = 0;
	for (int i = 1; i < NR_CLASS; i++){
		if (vote[i] > vote[indMax]){
			indMax = i;
		}
	}
	return classes[indMax];
}

void initConnections(){
	dual_coef[0] = dual_coef_0;
	dual_coef[1] = dual_coef_1;
	index_sv[0] = index_sv_0;
	index_sv[1] = index_sv_1;
}

int main(void) {
    int result = classify();
    return result;
}
