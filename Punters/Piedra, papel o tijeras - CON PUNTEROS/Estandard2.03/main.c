// Piedra, papel o tijeras | CON PUNTEROS | Julià Mauri Costa

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"




int main(){

	int partida = 0, numberplayer = 0, numbercomputer = 0, player = 0, computer = 0;
	char a = 'p';


	srand(time(0));

	do{
		fflush(stdin);
		apuestaUsuario(&numberplayer);
		piedraPapelTijera(&numbercomputer);
		comprobar(&numberplayer, &numbercomputer, &player, &computer, &partida);


	} while (partida != 1);

			printf("Quieres volver a jugar? (S/N)\n");
			scanf_s("%c", &a);
			system("cls");
			if (a == 's')
				main();
			else if (a == 'n'){
				system("pause");
				return 0;
			}
		}
