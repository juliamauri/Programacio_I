#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

int main(){

	char aux = "";
	char aux2[100];
	FILE *f;

	f = fopen("Ejemplo.txt", "r");
	if (f == NULL){
		printf("No se ha podido abrir el fichero");
		exit(1);
	}

	while (aux != EOF){
		aux = fgetc(f);
		printf("%c", aux);
	}
	printf("\n");

	fclose(f);

	f = fopen("Ejemplo.txt", "r");
		if (f == NULL){
			printf("No se ha podido abrir el fichero");
			exit(1);
		}

	while (!feof(f)){ // ! = NOT, feof(f) = ¿Estamos al final del fichero?
		fgets(aux2, 100, f);
		printf("%s", aux2);
	}
	printf("\n");

	fclose(f); // Cierra el fichero

	system("pause");
	return 0;
}