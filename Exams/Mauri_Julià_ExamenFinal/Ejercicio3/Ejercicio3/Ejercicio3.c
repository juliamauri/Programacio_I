//Julià Mauri Costa

/* Tomando en cuenta el ejercicio 3 de los aviones del simulacro de examen, realizar una función, en el cual en lugar de crearse un avión enemigo, se cree una bomba la cual al caer aleatoriamente en una casilla genere una onda expansiva que afecta a una casilla alrededor. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
	char flightNum[7]; 	/* max 6 caracteres */
	int x;
	int y;
	char simbolo, expansion;
	int bomb;
}Flight;

void pintaEspacio(char space[][8], int f, Flight *planes, int n);
void leeDatos(Flight *planes, int n);
void creaEnemigo(char space[][8], int f, Flight *enemigo);

int main(){
	int nAviones;
	Flight *planes;
	Flight *enemigo;
	char space[8][8] = {
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
		{ '-', '-', '-', '-', '-', '-', '-', '-' },
	};
	srand(time(NULL));
	printf("Cuantos aviones buenos hay en el aire?");
	scanf_s("%d", &nAviones);
	planes = (Flight*)malloc(sizeof(Flight)* nAviones);
	if (planes == NULL) {
		printf("Error in allocating the data array.\n");
		exit(0);
	}

	leeDatos(planes, nAviones);
	pintaEspacio(space, 8, planes, nAviones);
	printf("Se lanza la bomba antiaerea enemiga\n");
	enemigo = (Flight*)malloc(sizeof(Flight));
	if (enemigo == NULL) {
		printf("Error in allocating the data array.\n");
		exit(0);
	}
	creaEnemigo(space, 8, enemigo);
	pintaEspacio(space, 8, enemigo, 1);
	free(enemigo);
	free(planes);
	system("pause");
	return 0;
}

void pintaEspacio(char space[][8], int f, Flight *planes, int n){

	int i, j, t = 0;
	while (t < n){
		i = (planes + t)->x;
		j = (planes + t)->y;
		space[i][j] = (planes + t)->simbolo;
		if ((planes + t)->bomb == 1){
			space[i-1][j-1] = (planes + t)->expansion;
			space[i][j-1] = (planes + t)->expansion;
			space[i+1][j-1] = (planes + t)->expansion;
			space[i-1][j] = (planes + t)->expansion;
			space[i+1][j] = (planes + t)->expansion;
			space[i-1][j+1] = (planes + t)->expansion;
			space[i][j+1] = (planes + t)->expansion;
			space[i+1][j+1] = (planes + t)->expansion;
		}
		t++;
	}
	for (i = 0; i<8; i++){
		for (j = 0; j<8; j++){
			printf("%c", space[i][j]);
		}
		printf("\n");
	}
}

void leeDatos(Flight *planes, int n)
{
	int i;
	printf("Las coordenadas del cielo es una matriz de 8x8\n");
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("Introduce el nombre del avion [%i]: ", i);
		gets_s((planes + i)->flightNum, 6);
		//comprueba las coordenadas
		do {

			fflush(stdin);
			printf("Introduce la posicion x del avion [%i]: ", i);
			scanf_s("%i", &(planes + i)->x);
			fflush(stdin);
			printf("Introduce la posicion y del avion [%i]: ", i);
			scanf_s("%i", &(planes + i)->y);
		} while (((planes + i)->x>7 || (planes + i)->x<0) || ((planes + i)->y<0 || (planes + i)->y >7));
		fflush(stdin);
		printf("Introduce el simbolo del avion [%i]: ", i);
		scanf_s("%c", &(planes + i)->simbolo);
		fflush(stdin);
		(planes + i)->bomb = 0;
	}
}

void creaEnemigo(char space[][8], int f, Flight *enemigo){
	int i = 0, vx, vy, cont = 0;
	strcpy(enemigo->flightNum, "DARK BOMB");
	vx = (rand() % 7);
	enemigo->x = vx;
	vy = (rand() % 7);
	enemigo->y = vy;
	enemigo->simbolo = 4; // se pone un 4 para que salga un rombo
	enemigo->expansion = 35;
	enemigo->bomb = 1;
	if (space[vx][vy] != '-'){ cont++; }
	if (space[vx - 1][vy - 1] != '-'){ cont++; }
	if (space[vx][vy - 1] != '-') { cont++; }
	if (space[vx + 1][vy - 1] != '-') { cont++; }
	if (space[vx - 1][vy] != '-') { cont++; }
	if (space[vx + 1][vy] != '-'){ cont++; }
	if (space[vx - 1][vy + 1] != '-'){ cont++; }
	if (space[vx][vy + 1] != '-'){ cont++; }
	if (space[vx + 1][vy + 1] != '-'){ cont++; }
		
	printf("Los aviones derribados son: %i.\n", cont);
}