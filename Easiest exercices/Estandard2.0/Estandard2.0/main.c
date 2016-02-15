/* Sergio Jiménez y Julià Mauri */

//Ejercicio 1

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){

	int x, num1=1, num2;


	printf("Dame el primer numero: ");
	scanf_s("%i", &num1);
	printf("Dame el segundo numero: ");
	scanf_s("%i", &num2);

	printf("Maximo (1) o Minimo (2)?\n");
	switch (getch()){
	case '1':
		x = MAX(num1, num2);
		printf("El %i es el mayor\n", x);
		break;

	case '2':
		x = MIN(num1, num2);
		printf("El %i es el menor\n", x);
		break;

	default:
		main();
		break;
	}
		

	system("pause");
	return 0;
}