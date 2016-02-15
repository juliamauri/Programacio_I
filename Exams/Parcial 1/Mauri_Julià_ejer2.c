// Julià Mauri Costa

/* 2. (3 puntos)Realizar un programa que pida un numero entero positivo y 

diga si es un número Armstrong o no.

Un número entero positivo se llama un número Armstrong si la suma de 

los cubos de sus dígitos es igual al mismo número.  */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int num = 0, num1=0, num21=0,num2=0,num31=0, num3=0,num4=0,num41=0,num5=0, d=0, i=1;

	printf("Dame un numero entero positivo y te digo si es Armstrong o no.\n");
	printf("Primero dime cuantos digitos tiene (un maximo de 5): ");
	scanf_s("%i", &d);
	printf("Ahora dame el numero: ");
	scanf_s("%i", &num);

	switch (d){
	case 1:
		num1 = num;
		break;

	case 2:
		num1 = num / 10;
		num2 = num % 10;
		break;

	case 3:
		num1 = num / 100;
		num21 = num % 100;
		num2 = num21 / 10;
		num3 = num21 % 10;
		break;

	case 4:
		num1 = num / 1000;
		num21 = num % 1000;
		num2 = num21 / 100;
		num31 = num21 % 100;
		num3 = num31 / 10;
		num4 = num31 % 10;
		break;

	case 5:
		num1 = num / 10000;
		num21 = num % 10000;
		num2 = num21 / 1000;
		num31 = num21 % 1000;
		num3 = num31 / 100;
		num41 = num31 % 100;
		num4 = num41 / 10;
		num5 = num41 % 10;
		break;

	default:
		printf("No corresponde a uno de 5 digitos\n");
		system("pause");
		return 0;
		break;
	}
	
	
	if (num == num1*num1*num1+num2*num2*num2+num3*num3*num3+num4*num4*num4+num5*num5*num5)
		printf("%i es un numero Armstrong\n", num);
	else
		printf("%i no es un numero Armstrong\n", num);


	system("pause");
	return 0;
}