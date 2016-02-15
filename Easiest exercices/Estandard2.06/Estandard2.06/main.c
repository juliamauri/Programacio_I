#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main(){

	int parn= 1;

	while (parn != 0){

		printf("Dame un entero y te digo si es par (para aturar pon 0): ");
		scanf_s("%i", &parn);

		if (par(parn) == 1)
			printf("%i es par\n", parn);
		else
			printf("%i no es par\n", parn);
	}

	system("pause");
	return 0;
}