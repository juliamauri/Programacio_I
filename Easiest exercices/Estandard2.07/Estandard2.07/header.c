#include "header.h"

int cuadrado(int c){

	int i = 0, y=0;

	for (i = 1; i <= c; ++i){

		for (y = 1; y <= c; ++y)
			printf("*");

		printf("\n");
	}

	return 0;

}