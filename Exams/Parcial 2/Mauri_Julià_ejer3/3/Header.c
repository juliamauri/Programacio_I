#include <stdio.h>
#include "Header.h"

void pideElementos(int *filas, int *columnas){
	printf("Dame el numero de filas: ");
	scanf_s("%i", &(*filas));
	printf("Dame el numero de columnas: ");
	scanf_s("%i", &(*columnas));
}

int reservar(int filas, int colum){

	int i;

	int **mat;
	mat = (int**)malloc(filas*sizeof(int*));
	if (mat == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}

	for (i = 0; i < filas; i++){
		mat[i] = (int*)malloc(colum*sizeof(int));
		if (mat[i] == NULL){
			printf("No se ha podido reservar memoria.\n");
			exit(1);
		}
	}

	return mat;
}

void introduce(int filas, int colum, int **mat){
	int i, j;

	for (i = 0; i < filas; i++){
		for (j = 0; j < colum; j++){
			printf("Introduce el valor para el elemento [%i][%i]: ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}

}


void sumaMatriz(int **m1, int **m2, int **m3, int filas, int colum){
	int i, j;

	for (i = 0; i < filas; i++){
		for (j = 0; j < colum; j++){
			m3[i][j] = m1[i][j] + m2[i][j];
			}
		}
	}


void escribeMatriz(int **mat, int filas, int colum){
	int i, j;

	for (i = 0; i < filas; i++){
		for (j = 0; j < colum; j++){
			printf("%i\t", mat[i][j]);
		}
		printf("\n");
	}
}
