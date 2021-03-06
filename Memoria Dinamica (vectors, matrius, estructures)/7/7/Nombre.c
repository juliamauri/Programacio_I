//Comprobar que dos matrices dinamicas son iguales con una funcion.

#include <stdio.h>
#include <stdlib.h>

int reservar(int filas, int colum);
void introduce(int filas, int colum, int **mat);
void comparar(int filas, int colum, int **m1, int**m2);

int main(){

	int filas, colum;
	int **m1;
	int **m2;

	printf("introduce el numero de filas: ");
	scanf_s("%i", &filas);
	
	printf("introduce el numero de columnas: ");
	scanf_s("%i", &colum);

	m1 = reservar(filas, colum);
	m2 = reservar(filas, colum);

	introduce(filas, colum, m1);
	introduce(filas, colum, m2);
	
	comparar(filas, colum, m1, m2);

	system("pause");
		return 0;
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

void comparar(int filas, int colum, int **m1, int**m2){
	int i, j,aux=0;

	for (i = 0; i < filas && aux == 0; i++){
		for (j = 0; j < colum && aux == 0; j++){
			if (m1[i][j] != m2[i][j]){
				aux = 1;
			}
		}
	}

	if (aux == 0){
		printf("Ambas matrices SI son iguales.\n");
	}
	else{
		printf("Ambas matrices NO son iguales.\n");
	}
}
