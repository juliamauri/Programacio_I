#include "header.h"

int potenciaEntera(int b, int e){

	int i = 0, calculo;

	calculo = b;

	for (i = 2; i <= e; i++){

		calculo *= b;

	}

	return calculo;

}