#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main(){

	int num1, num2;

	printf("Dame 2 enteros y te digo si el segundo es mutiplo del 1r\n");
	printf("Dame el primer entero: ");
	scanf_s("%i", &num1);
	printf("Dame el segundo entero: ");
	scanf_s("%i", &num2);

	if (multiplo(num1, num2) == 1)
		printf("%i es multiplo de %i\n", num2, num1);
	else
		printf("%i no es multiplo de %i\n", num2, num1);

	system("pause");
	return 0;
}