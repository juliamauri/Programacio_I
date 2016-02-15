//Julià Mauri Costa

/*  Ejercicio 1: Crea una función que lea un número entero por teclado y determine si el número es malvado o no. La función regresará true (1) o false (0).
Un número malvado es todo número natural cuya expresión en base 2 (binaria) contiene un número par de unos. */

#include <stdio.h>
#include <stdlib.h>


int nMalvado(int num);

int main(){

	int num;


	printf("Introduce un numero: ");
	scanf_s("%i", &num);

	printf("El resultado es: %i\n\n", nMalvado(num));

	system("pause");
	return 0;
}

int nMalvado(int num){

	int cont = 0, result, temp;

	while(num != 0){
		temp = num % 2;
		num /= 2;
		if (temp == 1){
			cont++;
		}
	}

	if (cont < 2){
		result = 0;
	}
	else{
		result = 1;
	}

	return result;

}