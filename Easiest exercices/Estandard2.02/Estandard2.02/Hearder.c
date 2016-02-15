#include "Header.h"

float calculaCargo(float tiempo){

	float coste, precio=0.5;

	if (tiempo > 3 && tiempo < 19)
		coste = 2+(precio*(tiempo-3));
	else if (tiempo <= 3)
		coste = 2;
	else if (tiempo >= 19)
		coste = 10;

	return coste;
}