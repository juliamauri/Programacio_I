/* Sergio Jiménez y Julià Mauri */
//Ejercicio 2
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(){

	int num1=1;

	while (num1 != 0){
		printf("Ingrese un numero: ");
		scanf_s("%i", &num1);

		rango(num1);

	}

	system("pause");
	return 0;
}