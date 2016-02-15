//Crear una estructura que represente un libro y usando los strings dinamicos

#include <stdio.h>
#include <stdlib.h>


typedef struct{
	char *nombre;
	char *autor;
}libro;

void cambio(char aux[100]);
int my_strlen(char *s);
char *my_strcpy(char *dest, const char *src);

int main(){

	char aux[50];
	libro JDT;
	printf("Introduce un nombre para el libro: ");
	fgets(aux, 50, stdin);
	cambio(aux);

	JDT.nombre = (char*)malloc((my_strlen(aux)+1)*sizeof(char)); //o amb <string.h> -> strlen(aux)+1
	if (JDT.nombre == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	my_strcpy(JDT.nombre, aux);//o amb <string.h> -> strcpy(JDT.nombre)
	
	printf("Introduce un su autor para el libro: ");
	fflush(stdin);
	fgets(aux, 50, stdin);
	cambio(aux);

	JDT.autor = (char*)malloc((my_strlen(aux) + 1)*sizeof(char)); //o amb <string.h> -> strlen(aux)+1
	if (JDT.autor == NULL){
		printf("No se ha podido reservar memoria.\n");
		exit(1);
	}
	my_strcpy(JDT.autor, aux);//o amb <string.h> -> strcpy(JDT.nombre)

	printf("%s.\n", JDT.nombre);
	printf("%s.\n", JDT.autor);

	free(JDT.nombre);
	free(JDT.autor);

	system("pause");
	return 0;
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

int my_strlen(char *s){
	int l;
	l = 0;
	while (*s++ != '\0') l++;
	return l;
}

char *my_strcpy(char *dest, const char *src)
{
	char *save = dest;
	while (*dest++ = *src++);
	return save;
}