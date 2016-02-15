/* Cogiendo como base el fichero array2dim, dado en la sesión 22, realizar con notación puntero y utilizando malloc y free, el siguiente ejercicio.
Suma de dos matrices cuadradas de reales, los datos deberán ser introducidos por el usuario. */

//Julià Mauri Costa

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(){
	int filas = 0;
	int columnas = 0;
	int **m1;
	int **m2;
	int **m3;
	int i;	
	int j;	 
	int sum = 0;

	//Pide el numero de filas i columnas
	pideElementos(&filas, &columnas);
	printf("\n");

	//Funcion creada para reservar la memoria de cualquier matriz
	m1 = reservar(filas, columnas);
	m2 = reservar(filas, columnas);
	m3 = reservar(filas, columnas);

	//Pide los elementos para introducir sus xifras, con funciones
	printf("Valores para la matriz 1: \n");
	introduce(filas, columnas, m1);
	printf("\n");
	printf("Valores para la matriz 2: \n");
	introduce(filas, columnas, m2);
	printf("\n");

	//Escribe el contenido de la matriz con una funcion
	printf("Matriz 1: \n");
	escribeMatriz(m1, filas, columnas);
	printf("\n");
	printf("Matriz 2: \n");
	escribeMatriz(m2, filas, columnas);
	printf("\n");

	//Hace la suma de las matrices
	sumaMatriz(m1, m2, m3, filas, columnas);

	//Escribe el resultado
	printf("Matriz 3: La suma de las dos matrices.\n");
	escribeMatriz(m3, filas, columnas);
	printf("\n");

	//Libera el espacio
	free(m1);
	free(m2);
	free(m3);

	system("pause");
	return 0;
}