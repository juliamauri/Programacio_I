/*Cogiendo como base el fichero array1dim.rar, dado en la sesión 22, realizar con notación puntero y utilizando malloc y free, el siguiente ejercicio.
Realizar un programa que solicite al usuario el tamaño de dos vectores y calcule su producto escalar.*/

//Julià Mauri Costa

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(){
	int i, ne, *ptr1, *ptr2;

	//Pide el numero de elementos
	ne = pideNumElementos();

	//Reserva la memoria para el primer vector.
	ptr1 = (int *)malloc(ne*sizeof(int));
	if (ptr1 == NULL)
	{
		printf("Error! no puede reservar memoria.");
		exit(0);
	}
	//Pide los valores del vector 1
	printf("Dame los elementos del Primer Vector: \n");
	leeElementos(ptr1, ne);

	//Reserva memoria segundo vector
	ptr2 = (int *)malloc(ne*sizeof(int));
	if (ptr2 == NULL)
	{
		printf("Error! no puede reservar memoria.");
		exit(0);
	}
	//Pide los valores del vector 
	printf("Dame los elementos del Segundo Vector: \n");
	leeElementos(ptr2, ne);


	//Escribe los vectores
	for (i = 0; i < ne; i++){
		printf("[%i]", *(ptr1 + i));
	}
	printf("\n");
	for (i = 0; i < ne; i++){
		printf("[%i]", *(ptr2 + i));
	}
	printf("\n");
	
	//Muestra el resultado
	printf("El producto escalar es %i\n\n", productoEscalar(ptr1, ne, ptr2));

	//Librera el espacio
	free(ptr1);
	free(ptr2);

	system("pause");
	return 0;
}
