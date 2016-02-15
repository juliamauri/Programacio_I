// Julià Mauri Costa

/* 1. (2 puntos)Realizar un programa que pida un carácter por teclado y que 

informe si es una vocal o una consonante. */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char l[20];

	printf("Dame una letra y te digo si es vocal o consonante: ");
	gets(l);
	
	//scanf_s("%s", &l);
	//printf("%s", l);

	
	if (strcmp(l, "a") == 0 || strcmp(l, "A") == 0 || strcmp(l, "e") == 0 || strcmp(l, "E") == 0 || strcmp(l, "i") == 0 || strcmp(l, "I") == 0 || strcmp(l, "o") == 0 || strcmp(l, "O") == 0 || strcmp(l, "u") == 0 || strcmp(l, "U") == 0)
		printf("Tu letra %s es vocal\n", l);
	else
		printf("Tu letra %s es consonante\n", l);
		

	system("pause");
	return 0;
}