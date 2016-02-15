#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void cambio(char aux[]);

int main(){

	char aux[50];

	FILE *f;
	
	f = fopen("Bloque8.3.txt", "w");
	if (f == NULL){
		printf("Nose ha podido abrir.\n");
		exit(1);
	}

	printf("introduce una frase: ");
	fgets(aux, 50, stdin);
	cambio(aux);

	fprintf(f, "El string intruducido ha sido: %s", aux);

	fclose(f);

	system("pause");
	return 0;
}

void cambio(char aux[]){
	int i;

	for (i = 0; i < 50; i++){
		if (aux[i] == '\n'){
			aux[i] = '\0';
		}
	}
}