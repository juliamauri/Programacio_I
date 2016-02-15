// Julià Mauri Costa

/* 3. (2 puntos)Realiza una calculadora con los operadores +, -, *, / y con dos 

operandos. Utiliza el switch. */

#include <stdio.h>
#include <stdlib.h>

#define TECLA_SUM		43
#define TECLA_REST		45
#define TECLA_MULT   	42
#define TECLA_DIV    	47

int main(){

	int num = 0;
	float a = 0, b = 0;

	printf("Dame los valores a y b para hacer la operacion que elegiras despues\n");
	printf("a: ");
	scanf_s("%f", &a);
	printf("b: ");
	scanf_s("%f", &b);
	printf("\n");
	printf("Que deseas? (Pon el signo)\n");
	printf("+ Sumar\n");
	printf("- Restar\n");
	printf("* Multiplicar\n");
	printf("/ Dividir\n");
	printf("\n");

	switch (getch())
	{
	case TECLA_SUM:
		printf("%.2f+%.2f=%.2f\n",a,b, a + b);
		break;
	case TECLA_REST:
		printf("%.2f-%.2f=%.2f\n", a, b, a - b);
		break;
	case TECLA_MULT:
		printf("%.2f*%.2f=%.2f\n", a, b, a * b);
		break;
	case TECLA_DIV:
		printf("%.2f/%.2f=%.2f\n", a, b, a / b);
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}