// Julià Mauri Costa

/* 4. (3 puntos)Escribir un programa que ayude a aprender las tablas de 

multiplicar. Para ello se irá pidiendo la tabla de multiplicar de un número 

(pedido por teclado con anterioridad) y comprobando que los valores 

introducidos son correctos. Si es así, el programa escribirá “correcto” y 

en caso contrario deberá escribir “Lo siento, se ha equivocado. La 

respuesta correcta era número”. */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, num, resultado, fallos=0;

	printf("Con que numero quieres practicar? ");
	scanf_s("%i", &num);

	for (i = 1; i <= 10; i++){
		//printf("%i*%i=%i\n", num, i, num*i);
		printf("%i * %i= ", num, i);
		scanf_s("%i", &resultado);
		if (resultado == (num * i))
			printf("Valor correcto\n");
		else{
			printf("Lo siento se ha equivocado. La respuesta correcta era %i\n", num*i);
			++fallos;
		}
	}

	printf("Has acertado %i veces de %i numeros.\n", i-1-fallos, i-1);

	system("pause");
	return 0;
}