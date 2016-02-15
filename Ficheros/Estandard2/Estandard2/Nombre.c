#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char *nombre;
	int edad;
}trabajadores;

trabajadores *trab;

void vaciar(char temp[]);
void copiar(char temp[], int i);

int main(){

	int i,j;
	char aux;
	char temp[50];
	int cont = 0;

	FILE *f;
	
	f = fopen("Bloque8.2.txt", "r");
	if (f == NULL){
		printf("No se ha podidio abrir el fichero");
		exit(1);
	}

	while (!feof(f)){
		fgets(temp, 50, f);
		cont++;
	}

	rewind(f); // posa el cursor del ficher a la 1r posició

	trab = (trabajadores*)malloc(cont*sizeof(trabajadores));
	if (trab == NULL){
		printf("No se ha podido reservar la memoria");
		exit(1);
	}

	for (i = 0; !feof(f); i++){
		vaciar(temp);
		aux = '0';
		for (j = 0; aux != '-'; j++){
			aux = fgetc(f);
			if (aux != '-'){
				temp[j] = aux;
			}
		}
		copiar(temp,i);

		fgets(temp, 4, f); //numero + \n + \0
		trab[i].edad = atoi(temp); //Combierte los numeros en char a enteros (int)

		printf("Nombre: %s Edad: %i.\n", trab[i].nombre, trab[i].edad);
	}

	system("pause");
	return 0;
}

void vaciar(char temp[]){
	int i;

	for (i = 0; i < 50; i++){
		temp[i] = '\0';
	}
}

void copiar(char temp[], int i){
	int N = strlen(temp) + 1; // +1 = '\0'

	trab[i].nombre = (char*)malloc(N*sizeof(char));
	if (trab[i].nombre == NULL){
		printf("No se ha podido reservar la memoria");
		exit(1);
	}

	strcpy(trab[i].nombre, temp);
}