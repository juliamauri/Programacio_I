#include "Header.h"

void cambio(char aux[50]){
	int i, temp = 0;

	for (i = 0; i < 100 && temp == 0; i++){ //temp sirve para salir del bucle tan pronto que cumpla su funcion, optimizamos tiempo
		if (aux[i] == '\n'){
			aux[i] = '\0';
			temp = 1;
		}
	}
}