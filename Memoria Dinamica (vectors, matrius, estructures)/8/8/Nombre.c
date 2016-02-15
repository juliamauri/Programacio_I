//Hacer un ejemple de batallas por turnos entre un heroe y varios malos, los malos se incrementan en 1
//cuando un contador del turno de la batalla sea par.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
	int salud;
	int mana;
	int fuerza;
	int magia;
}heroe;

typedef struct{
	int salud;
	int fuerza;
}malo;

heroe yo;
malo *otros;

void introduceyo();
void introducemalo(int N);
void asignamem(int *N);

int main(){
	int op,i,objetivo, pegar;
	int cont = 0;
	int N = 0;
	srand(time(NULL));
	introduceyo();

	asignamem(&N);
	
	do{
		do{
			printf("(1) Atacar.\n");
			printf("(2) Magia.\n");
			scanf_s("%i", &op);
		} while (op < 1 || op > 2);

		printf("Elige al malo que quieres pegar.\n");
		for (i = 0; i < N; i++){
			printf("Malo %i tiene una vida de: %i.\n", i, otros[i].salud);
		}
		scanf_s("%i", &objetivo);

		if (otros[objetivo].salud > 0){
			switch (op){
			case 1:
				pegar = yo.fuerza;
				printf("He pegado %i.\n", pegar);
				otros[objetivo].salud -= pegar;
				printf("La salud del Malo %i es de %i.\n", objetivo, otros[objetivo].salud);
				break;
			case 2:
				if (yo.mana > 0){
					pegar = yo.magia * (rand() % 3);
					printf("He pegado %i.\n", pegar);
					otros[objetivo].salud -= pegar;
					printf("La salud del Malo %i es de %i.\n\n", objetivo, otros[objetivo].salud);
				}
				else{
					printf("No tienes mana!!\n\n");
				}
				break;
			}
		}
		else{
			printf("Deja a los cadaveres!!\n\n");
		}

		printf("Turno de los malos: \n");
		for (i = 0; i < N; i++){
			if (otros[i].salud > 0){
				pegar = otros[i].fuerza * (rand() % 3);
				printf("El Malo %i me ha pegado %i.\n", i, pegar);
				yo.salud -= pegar;
				printf("Mi saluid es de %i.\n\n", yo.salud);
			}
		}

		if ((cont % 2) == 0){
			otros = (malo*)realloc(otros, (N + 1)*sizeof(malo));
			if (otros == NULL){
				printf("No se ha podido reservar memoria.\n");
				exit(1);
			}
			introducemalo(N);
			N++;
		}
		cont++;
		

	} while (yo.salud > 0);

	system("pause");
	return 0;
}

void introduceyo(){
	yo.salud = 1000;
	yo.mana = 100;
	yo.fuerza = 50;
	yo.magia = 100;
}

void introducemalo(int N){
	otros[N].salud = 100;
	otros[N].fuerza = 50;
}

void asignamem(int *N){
	otros = (malo*)malloc((*N + 1)*sizeof(malo));
	if (otros == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	introducemalo(*N);
	(*N)++;
}