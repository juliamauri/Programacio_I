#include "header.h"


#define TECLA_P 112
#define TECLA_A 97
#define TECLA_T 116


void apuestaUsuario(int *a){

	printf("Que quieres? Piedra (p), Papel (a) o Tijeras (t): \n");
	
	if (getch() == TECLA_P)
		*a = 0;
	else if (getch() == TECLA_A)
		*a = 1;
	else if (getch() == TECLA_T)
		*a = 2;


}

void piedraPapelTijera(int *b){

	*b = rand() % 3;

}

void comprobar(int *np, int *nc, int *pl, int *c, int *p){

		if ((*np == 0 && *nc == 1) || (*np == 1 && *nc == 2) || (*np == 2 && *nc == 0)){
			printf("El ordenador ha ganado la ronda\n\n");
			*c = *c + 1;
		}
		else if ((*np == 1 && *nc == 0) || (*np == 2 && *nc == 1) || (*np == 0 && *nc == 2)){
			printf("Has ganado la ronda!\n\n");
			*pl = *pl + 1;
		}
		else if (*np == *nc) {
			printf("Has empatado...\n\n");
		}


		if (*pl == 2){
			printf("Has ganado!!\n\n");
			*p = 1;
		}
		else if (*c == 2){
			printf("Ha ganado la computadora...\n\n");
			*p = 1;
		}

}
