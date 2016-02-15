#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<time.h>
#include"creatures.h"

// Use this file to add all utility functions, like calculating combat results

void configHeroe()
{
	char aux[50];

	heroe.coins = 0;
	heroe.xp = 0;

	printf("Nombre heroe: ");
	fflush(stdin);
	fgets(aux, 50, stdin);
	cambio(aux);

	heroe.name = (char*)malloc((strlen(aux) + 1)*sizeof(char));
	if (heroe.name == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	
	strcpy(heroe.name, aux);

	printf("Vida: ");
	scanf_s("%i", &(heroe.combat.hp));

	printf("Ataque minimo: ");
	scanf_s("%i", &(heroe.combat.attack_min));

	printf("Ataque maximo: ");
	scanf_s("%i", &(heroe.combat.attack_max));

	printf("Armadura: ");
	scanf_s("%i", &(heroe.combat.armor));
}

void asignamem(int *N){
	enemigos = (monster_data*)malloc((*N + 1)*sizeof(monster_data));
	if (enemigos == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	configEnemy(*N);
	(*N)++;
}

void configEnemy(int N){
	enemigos[N].coins = 5;
	enemigos[N].xp = 1;
	enemigos[N].combat.hp = 20;
	enemigos[N].combat.attack_min = 2;
	enemigos[N].combat.attack_max = 6;
	enemigos[N].combat.armor = 3;
}

void addenenigos(int *t, int *N){
	if ((*t % 2) == 0){
		enemigos = (monster_data*)realloc(enemigos, (*N + 1)*sizeof(monster_data));
		if (enemigos == NULL){
			printf("No se ha podido reservar memoria.\n");
			exit(1);
		}
		configEnemy(*N);
		(*N)++;
	}

}

void batalla(int *N){

	int i, ataque, cont = 0;


	printf("Los siguientes goblins estan a la batalla:\n");
	for (i = 0; i < *N; i++){
		if (enemigos[i].combat.hp > 0){
			cont++;
			printf("El goblin %i, numero %i de la horda, tiene %i de vida.\n", cont, i, enemigos[i].combat.hp);
		}
	}
	cont = 0;
	printf("\n");
	
	printf("Tu turno. A que goblin DE LA HORDA quieres dañar? ");
	scanf("%i", &i);
	ataque = (heroe.combat.attack_min + rand() % (heroe.combat.attack_max + 1 - heroe.combat.attack_min)) - enemigos[i].combat.armor;
	enemigos[i].combat.hp -= ataque;
	printf("Quitaste %i al goblin %i de la horda, y ahora tiene %i de vida.\n\n", ataque, i, enemigos[i].combat.hp);
	if (enemigos[i].combat.hp <= 0){
		printf("Has obtenido %i de monedas y %i de experiencia!\n\n", enemigos[i].coins, enemigos[i].xp);
		heroe.coins += enemigos[i].coins;
		heroe.xp += enemigos[i].xp;
	}

	printf("El turno de los goblins:\n");
	for (i = 0; i < *N; i++){
		if (enemigos[i].combat.hp > 0){
			cont++;
		}
		ataque = (enemigos[i].combat.attack_min + rand() % (enemigos[i].combat.attack_max + 1 - enemigos[i].combat.attack_min)) - heroe.combat.armor;
		heroe.combat.hp -= ataque;
		if (heroe.combat.hp < 0 && cont > 1){
			printf("Incluso muerto, el goblin %i, numero %i de la horda, te ataca igualmente...\n", cont, i);
		}
		else {
			printf("El goblin %i, numero %i de la horda, te ha quitado %i de vida. Tienes %i de vida.\n", cont, i, ataque, heroe.combat.hp);
		}
	}
	printf("\n");

}

void cambio(char aux[50]){
	int i, temp = 0;

	for (i = 0; i < 100 && temp == 0; i++){
		if (aux[i] == '\n'){
			aux[i] = '\0';
			temp = 1;
		}
	}
}

void guardar(int *N, int *tiempo){

	int i, cont = 0;

	FILE *f;

	f = fopen("guardado", "w");
	if (f == NULL){
		printf("No se ha podido abrir.\n");
		exit(1);
	}



	fprintf(f, "%i-%i-%i-%i-%i-%i-%s\n", heroe.coins, heroe.xp, heroe.combat.hp, heroe.combat.attack_min, heroe.combat.attack_max, heroe.combat.armor, heroe.name);
	
	for (i = 0; i < *N; i++){
		if (enemigos[i].combat.hp > 0){
			cont++;
		}
	}
	fprintf(f, "%i\n", cont);
	for (i = 0; i < *N; i++){
		if (enemigos[i].combat.hp > 0){
			fprintf(f, "%i ", enemigos[i].combat.hp);
		}
	}
	fprintf(f, "\n");

	fprintf(f, "%i", *tiempo);


	fclose(f);
}

void cargar(int *N, int *tiempo){

	int i, j, k = 0;
	char aux;
	char temp[50];

	FILE *f;

	f = fopen("guardado", "r");
	if (f == NULL){
		printf("No se ha podido abrir.\n");
		exit(1);
	}

	aux = '_';

	vaciar(temp);
	for (i = 0; aux != '-'; i++){
		aux = fgetc(f);
		if (aux != '-'){
			temp[i] = aux;
		}
		heroe.coins = atoi(temp);
	}
	
	aux = fgetc(f);

	vaciar(temp);
	for (i = 0; aux != '-'; i++){
		if (aux != '-'){
			temp[i] = aux;
			aux = fgetc(f);
		}
	}
	heroe.xp = atoi(temp);

	aux = fgetc(f);

	vaciar(temp);
		for (i = 0; aux != '-'; i++){
		if (aux != '-'){
			temp[i] = aux;
			aux = fgetc(f);
		}
	}
	heroe.combat.hp = atoi(temp);

	aux = fgetc(f);

	vaciar(temp);
	for (i = 0; aux != '-'; i++){
		if (aux != '-'){
			temp[i] = aux;
			aux = fgetc(f);
		}
	}
	heroe.combat.attack_min = atoi(temp);

	aux = fgetc(f);

	vaciar(temp);
	for (i = 0; aux != '-'; i++){
		if (aux != '-'){
		temp[i] = aux;
		aux = fgetc(f);
		}
	}
	heroe.combat.attack_max = atoi(temp);

	aux = fgetc(f);

	vaciar(temp);
	for (i = 0; aux != '-'; i++){
		if (aux != '-'){
			temp[i] = aux;
			aux = fgetc(f);
		}
	}
	heroe.combat.armor = atoi(temp);

	aux = fgetc(f);

	vaciar(temp);
	for (i = 0; aux != '\n'; i++){
		if (aux != '\n'){
			temp[i] = aux;
			aux = fgetc(f);
		}
	}

	heroe.name = (char*)malloc((strlen(temp) + 1)*sizeof(char));
	if (heroe.name == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}

	strcpy(heroe.name, temp);

	aux = fgetc(f);

	vaciar(temp);
	for (i = 0; aux != '\n'; i++){
		if (aux != '\n'){
			temp[i] = aux;
			aux = fgetc(f);
		}
	}
	*N = atoi(temp);

	asignamem(&N); //Coje los enemigos N, i los crea des de 0.

	aux = fgetc(f);

	for (i = 0; aux != '\n'; i++){
		vaciar(temp);
		for (j = 0; aux != ' '; j++){
			if (aux != ' '){
				temp[j] = aux;
			}
			aux = fgetc(f);
		}

		enemigos[k].combat.hp = atoi(temp); //Modifica la vida que tenian en la aprtida guardada.
		k++;

		aux = fgetc(f);
	}

	vaciar(temp);
	for (i = 0; !feof(f); i++){
		aux = fgetc(f);
		if (!feof(f)){
			temp[i] = aux;
		}
	}

	*tiempo = atoi(temp);

	fclose(f);

}


void vaciar(char temp[]){
	int i;

	for (i = 0; i < 50; i++){
		temp[i] = '\0';
	}
}

void salir(){
	free(enemigos);
	free(heroe.name);

	exit(1);
}

void muestra(int *N, int *tiempo){

	int i;

	printf("%i\n", heroe.coins);
	printf("%i\n", heroe.xp);
	printf("%s\n", heroe.name);
	printf("%i\n", heroe.combat.armor);
	printf("%i\n", heroe.combat.attack_max);
	printf("%i\n", heroe.combat.attack_min);
	printf("%i\n", heroe.combat.hp);
	printf("\n");
	printf("%i\n", *N);
	printf("%i\n", *tiempo);
	printf("\n");
	for (i = 0; i < *N; i++){
		printf("%i\n",enemigos[i].coins);
		printf("%i\n", enemigos[i].xp);
		printf("%i\n", enemigos[i].combat.armor);
		printf("%i\n", enemigos[i].combat.attack_max);
		printf("%i\n", enemigos[i].combat.attack_min);
		printf("%i\n", enemigos[i].combat.hp);
	}
	printf("\n");
	printf("Informacion que se ha cargado, enter para iniciar la partida.");
	system("pause");

}