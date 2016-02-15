//Realizar un programa que copie el contenido de una matriz en otra y todo de manera dinamica.

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,j;
	int filas, colum;
	int **m1;
	int **m2;

	printf("Introduce el numero de filas: ");
	scanf_s("%i", &filas);

	printf("Introduce el numero de columnas: ");
	scanf_s("%i", &colum);

	m1 = (int**)malloc(filas*sizeof(int*));
	if (m1 == NULL){
		printf("No se ha podido reservar espacio para la memoria.\n");
		exit(1);
	}

	for (i = 0; i < filas; i++){
		m1[i] = (int*)malloc(colum*sizeof(int));
		if (m1[i] == NULL){
			printf("No se ha podido reservar espacio para la memoria.\n");
			exit(1);
		}
	}

	for (i = 0; i < filas; i++){
		for (j = 0; j < colum; j++){
			scanf_s("%i", &m1[i][j]);
		}
	}


	m2 = (int**)malloc(filas*sizeof(int*));
	if (m2 == NULL){
		printf("No se ha podido reservar espacio para la memoria.\n");
		exit(1);
	}

	for (i = 0; i < filas; i++){
		m2[i] = (int*)malloc(colum*sizeof(int));
		if (m2[i] == NULL){
			printf("No se ha podido reservar espacio para la memoria.\n");
			exit(1);
		}
	}

	for (i = 0; i < filas; i++){
		for (j = 0; j < colum; j++){
			m2[i][j] = m1[i][j];
			printf("%i ", m2[i][j]);
		}
		printf("\n");
	}

	free(m1);
	free(m2);

	system("pause");
	return 0;
}