/* Sergio Jiménez y Julià Mauri */

// Ejercicio 3

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(){

	int i = 0;
	float tiempo=1;

	while (tiempo != 0){
		printf("Pon el tiempo de estacionamiento: ");
		scanf_s("%f", &tiempo);

		if (tiempo <= 24)
			printf("El coste total de %.2f h. estacionado es %.2f\n", tiempo, calculaCargo(tiempo));
		else
			printf("El coche no puede estar más de 24h\n");
		++i;
	}

	system("pause");
	return 0;
}