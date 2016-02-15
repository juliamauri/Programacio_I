//Julià Mauri Costa

/* Ejercicio 2: Escribe una función que copie una cadena de caracteres en otra, transformando alguna consonante o vocal de la cadena, por el carácter recibido por teclado. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cambialetra(char* pi, char* pf, char* frase);

int main(){

	char pi, pf;

	char fraseo[] = "Mi riqueza es la vida";
	char frase[] = "Mi riqueza es la vida";
	char *frasem;

	printf("Dame la letra a cambiar: ");
	scanf_s("%c", &pi);
	fflush(stdin);

	printf("Dame el caracter por el que se cambia: ");
	scanf_s("%c", &pf);

	frasem = cambialetra(pi, pf, frase);

	printf("La cadena '%s' cambiada es %s.\n\n", fraseo, frasem);

	free(frasem);

	system("pause");
	return 0;
}

char* cambialetra(char* pi, char* pf, char* frase){

	int i;
	int N = strlen(frase);
	char *frasem;

	frasem = (char*)malloc(sizeof(char)*(N + 1));

	for (i = 0; i < N; i++){
		if (frase[i] == pi){
			frase[i] = pf;
		}
		frasem[i] = frase[i];
	}
	frasem[i] = '\0';


	return frasem;

}