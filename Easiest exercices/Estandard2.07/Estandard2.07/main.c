#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main(){

	int num;

	printf("Dame un parametro para determinar el nombre de lado del cuadrado: ");
	scanf_s("%i", &num);

	cuadrado(num);

	system("pause");
	return 0;
}