#ifndef __CREATURES_H__
#define __CREATURES_H__

struct combat_data
{
	int hp;
	int attack_min;
	int attack_max;
	int armor;
}combat_data;

typedef struct 
{
	char* name;
	struct combat_data combat;
	int coins;
	int xp;
}hero_data;

typedef struct 
{
	struct combat_data combat;
	int coins;
	int xp;
}monster_data;

hero_data heroe;
monster_data *enemigos;

void configHeroe(); // configura el heroe
void asignamem(int *N); // configura los enemigos (estructura dinamica)
void configEnemy(int N); // Pone valores de los enemigos (se encuentra ya dentro de asignemem)
void addenenigos(int *t, int *N); // Añade enemigos durante el avance de la partida
void batalla(int *N); // Donde se hacen los ataques
void cambio(char aux[100]); // Complementaria a fgets, cambia '\n' a '\0'.
void guardar(int *N, int *tiempo); //guarda la partida en un archivo txt
void cargar(int *N, int *tiempo);// Carga la partida
void vaciar(char temp[]); //Vacia el temp, por cargar y añadir los diderentes valores en diferentes apartados
void salir(); // SAl del juego
void muestra(int *N, int *tiempo); //Testeo de carga de los archivos de carrega.

#endif // __CREATURES_H__