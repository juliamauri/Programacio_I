//Ejercicio 1: Cogiendo como base el fichero cadena_punteros.rar, sesión 16-17-18-19, realizar el siguiente programa:Recibir una palabra y encontrar todas las vocales que tiene.

//Julià Mauri Costa

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(){
	int i;
	char p[50];
	int N = 5;
	int *contador;

	contador = (int*)calloc(N, sizeof(int)); //crea un vector dinamico con valor 0 inicial en cada posicion
	if (contador == NULL){
		printf("No se ha podido asignar la memoria.\n");
		exit(1);
	}

	printf("Introduce la palabra o frase(49 caracteres maximo): ");
	fgets(p, 50, stdin); //fgets es una de las formas mas seguras para captar strings
	cambio(p); //el defecto de fgets es que coge '\n' y no '\0', lo que hace esta funcion es cambiar ese caracter (salto de linea por null)

	for (i = 0; i < 50; i++){ //conta las vocales pasando letra por letra de la frase o palabra
		if (p[i] == 'a' || p[i]=='A')
			*(contador + 0) += 1;
		else if (p[i] == 'e'||p[i]=='E')
			*(contador + 1) += 1;
		else if (p[i] == 'i' || p[i] == 'I')
			*(contador + 2) += 1;
		else if (p[i] == 'o' || p[i] == 'O')
			*(contador + 3) += 1;
		else if (p[i] == 'u' || p[i] == 'U')
			*(contador + 4) += 1;
	}

	printf("La palabra '%s' tiene a:%i. e:%i. i:%i. o:%i. u:%i\n\n", p, *(contador + 0), *(contador + 1), *(contador + 2), *(contador + 3), *(contador + 4));

	//Libera el espacio
	free(contador);

	system("pause");
	return 0;
}

