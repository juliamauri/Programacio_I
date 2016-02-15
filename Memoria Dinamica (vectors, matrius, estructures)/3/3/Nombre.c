//Hacer un vector con 100 enteros que estan comprendidos entre 0 y 2 y contar con un vector dinamico cuantas veces aparece cada numero.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int N);

int main(){
	int i,op;
	int N = 3;
	int vector[100];
	int *contador;
	
	contador = (int*)calloc(N,sizeof(int));//Asignado espacio de memoria
	if (contador == NULL){
		printf("No se ha podido asignar la memoria.\n");
	}
	else{
		aleatorio(vector, 100);
		for (i = 0; i < 100; i++){
			op = vector[i];
			*(contador + op) += 1; 
		}

		for (i = 0; i < N; i++){
			printf("%i ", *(contador + i));
		}
	}

	free(contador);

	system("pause");
	return 0;
}

void aleatorio(int *vector, int N){
	int i;
	srand(time(NULL));

	for (i = 0; i < N; i++){
		*(vector + i) = rand() % 3;
	}
}