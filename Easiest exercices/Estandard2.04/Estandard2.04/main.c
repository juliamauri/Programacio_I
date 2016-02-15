/* Sergio Jiménez y Julià Mauri */

// Ejercicio 4

#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main(){

	int e = 0, b;

	printf("Dame la base entera: ");
	scanf_s("%i", &b);
	printf("Dame el exponente entero positivo: ");
	scanf_s("%i", &e);

	if (e < 0){
		printf("El exponente no es entero positivo. Vuelve a escribirlo: ");
		scanf_s("%i", &e);
	}

	printf("El resultado de base %i con exponente %i es %i\n", b, e, potenciaEntera(b, e));

	system("pause");
	return 0;
}