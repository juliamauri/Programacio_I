#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "creatures.h"

int main()
{
	int N = 0, tiempo = 0, select;

	srand(time(NULL));

	do{
		printf("Que quieres hacer?\n");
		printf("(1) Nueva partida.\n");
		printf("(2) Cargar partida guardada.\n");
		printf("(3) Salir.\n");
		scanf_s("%i", &select);
	} while (select < 1 || select > 3);

	switch (select)
	{
	case 1:
		configHeroe();
		printf("\n");
		asignamem(&N);
		break;

	case 2:
		cargar(&N, &tiempo);
		muestra(&N, &tiempo);
		break;

	case 3:
		exit(1);
		break;
	}


	do {

		system("cls");

		addenenigos(&tiempo, &N);

		batalla(&N);

		tiempo++;

		if (heroe.combat.hp > 0){
			do{
				printf("Que quieres hacer?\n");
				printf("(1) Passar a la siguiente ronda.\n");
				printf("(2) Guardar y continuar.\n");
				printf("(3) Guardar y salir.\n");
				printf("(4) Salir.\n");
				scanf_s("%i", &select);
			} while (select < 1 || select > 4);

			switch (select)
			{
			case 1:
				break;

			case 2:
				guardar(&N, &tiempo);
				break;

			case 3:
				guardar(&N, &tiempo);
				salir();
				break;

			case 4:
				salir();
				break;
			}


		}
	} while (heroe.combat.hp > 0);

	printf("Te han matado %s. FIN DEL JUEGO.\n", heroe.name);

	free(enemigos);
	free(heroe.name);

	system("pause");
	return 0;
}