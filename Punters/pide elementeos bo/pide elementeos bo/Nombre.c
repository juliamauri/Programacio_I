#include <stdio.h>
#include <stdlib.h>
void leerValores(int*, int);
void mostrarValores(int*, int);
void encontrarMayorPosicion(int*, int);
/*2. Diseñe un programa en C, que pida el número de elementos a leer, reserve el espacio con
ayuda de malloc y lea los elementos del array, una vez que se hayan introducido los datos
mostrar por pantalla el mayor de los elementos y la posición del elemento dentro del array.
Realizar las siguientes funciones:
leerValores
mostrarValores
encontrarMayorPosicion

Ejemplo:
¿Cuántos valores ? 7
Introducir Valores: 5 7 8 2 89 1 5
El elemento mayor es: 89
La posición dentro del array es: 4*/
int main()
{
	int *p;
	int n = 0;
	printf("Escribe la cantidad de valores a leer: ");
	scanf_s("%i", &n);
	p = (int*)malloc(n*sizeof(int));
	if (p == NULL)
	{
		printf("No hay suficiente memoria");
		exit(0);
	}
	leerValores(p, n);
	mostrarValores(p, n);
	encontrarMayorPosicion(p, n);
	free(p);
	getchar();
	getchar();
	return 0;

}

void leerValores(int *p, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("Escribe el valor %i: ", i);
		scanf_s("%i", &(*(p + i)));
	}
}

void mostrarValores(int *p, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%i\t", *(p + i));
	}
}
void encontrarMayorPosicion(int *p, int n)
{
	int i = 0, pos = 0, maxi = 0;
	for (i = 0; i < n; i++)
	{
		if (*(p + i) > maxi)
		{
			maxi = *(p + i);
			pos = i;
		}
	}
	printf("\nEl numero maximo es %i en la posicion %i", maxi, pos);
}