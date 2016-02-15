//Juli� Mauri Costa

/*  Ejercicio 1: Crea una funci�n que lea un n�mero entero por teclado y determine si el n�mero es malvado o no. La funci�n regresar� true (1) o false (0).
Un n�mero malvado es todo n�mero natural cuya expresi�n en base 2 (binaria) contiene un n�mero par de unos. */

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