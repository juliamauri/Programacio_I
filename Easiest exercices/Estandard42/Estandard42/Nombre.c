#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define CONTRASEÑA 3625

void Bloque1(void);
void Bloque2(void);

void Ejercicio11(void);
void Ejercicio12(void);
void Ejercicio13(void);
void Ejercicio14(void);
void Ejercicio15(void);
void Ejercicio16(void);
void Ejercicio17(void);
void Ejercicio18(void);
void Ejercicio19(void);

void Ejercicio22(void);
void Ejercicio23(void);
void Ejercicio24(void);
void Ejercicio25(void);
void Ejercicio26(void);
void Ejercicio27(void);
void Ejercicio28(void);
void Ejercicio29(void);


int main(){

	int num = 0;
	printf("Ejercicios del pdf para la preparacion del parcial\n");
	printf("Selecciona el 1r o el 2ndo bloque:  ");
	scanf_s("%i", &num);

	switch (num)
	{
	case 1:
		Bloque1();
		break;

	case 2:
		Bloque2();
		break;
		
	default:
		break;
	}
	system("pause");
	return 0;
}

void Bloque1(void){

	int numbl1 = 0;

	printf("Bloque 1\n");
	printf("\n");
	printf("1. Ejercicio 1.1\n");
	printf("2. Ejercicio 1.2\n");
	printf("3. Ejercicio 1.3\n");
	printf("4. Ejercicio 1.4 y 2.1\n");
	printf("5. Ejercicio 1.5\n");
	printf("6. Ejercicio 1.6\n");
	printf("7. Ejercicio 1.7\n");
	printf("8. Ejercicio 1.8\n");
	printf("9. Ejercicio 1.9\n");
	printf("\n");
	printf("Selecciona el ejercicio: ");
	scanf_s("%i", &numbl1);

	switch (numbl1){
	case 1:
		Ejercicio11();
		break;

	case 2:
		Ejercicio12();
		break;

	case 3:
		Ejercicio13();
		break;
		
	case 4:
		Ejercicio14();
		break;
		
	case 5:
		Ejercicio15();
		break;

	case 6:
		Ejercicio16();
		break;

	case 7:
		Ejercicio17();
		break;

	case 8:
		Ejercicio18();
		break;

	case 9:
		Ejercicio19();
		break;
		
	default:
		break;
	}

	return main;
}

void Bloque2(void){

	int numbl2 = 0;

	printf("Bloque 2:\n");
	printf("\n");
	printf("1. Ejercicio 1.4 y 2.1\n");
	printf("2. Ejercicio 2.2\n");
	printf("3. Ejercicio 2.3\n");
	printf("4. Ejercicio 2.4\n");
	printf("5. Ejercicio 2.5\n");
	printf("6. Ejercicio 2.6\n");
	printf("7. Ejercicio 2.7\n");
	printf("8. Ejercicio 2.8\n");
	printf("9. Ejercicio 2.9\n");
	printf("\n");
	printf("Selecciona el ejercicio: ");
	scanf_s("%i", &numbl2);

	switch (numbl2){
	case 1:
		Ejercicio14();
		break;

	case 2:
		Ejercicio22();
		break;

	case 3:
		Ejercicio23();
		break;

	case 4:
		Ejercicio24();
		break;

	case 5:
		Ejercicio25();
		break;

	case 6:
		Ejercicio26();
		break;

	case 7:
		Ejercicio27();
		break;

	case 8:
		Ejercicio28();
		break;

	case 9:
		Ejercicio29();
		break;

	default:
		break;
	}

	return main;
}

void Ejercicio11(){

	float ro = 0, ndo = 0;

	printf("Escriba el 1r numero: \n");
	scanf_s("%f", &ro);

	printf("Escriba el 2ndo numero: \n");
	scanf_s("%f", &ndo);

	if (ro > ndo)
		printf("El numero %.2f es el más grande", ro);
	else if (ndo > ro)
		printf("El numero %.2f es el más grande", ndo);
	else if (ro == ndo)
		printf("Los numeros %.2f y %.2f son iguales", ro, ndo);

	return main;
}

void Ejercicio12(){

	int num = 0;

	printf("Dame un numero y te digo si es par: \n");
	scanf_s("%i", &num);

	if (num % 2 == 0)
		printf("El numero %i es par\n", num);
	else
		printf("El numero %i es impar\n", num);


	return main;
}

void Ejercicio13(){

	float nota = 0;

	printf("Escriba su nota y te digo si eres apto. \n");
	scanf_s("%f", &nota);

	if (nota >= 5)
		printf("Eres apto\n");
	else
		printf("No eres apto\n");


	return main;
}

void Ejercicio14(){

	float apuesta = 0, total = 0, cierre = 1;
	short moneda;

	srand(time(NULL));


	while (cierre != 0){

		printf("Cuantos euros quieres apostar? ");
		scanf_s("%f", &apuesta);

		moneda = rand() % 2;

		if (apuesta <= 0){
			printf("Has cabado el juego con %.2f e\n", total);
			cierre = apuesta;
		}
		else if (moneda == 1){
			total = total + apuesta * 2;
			printf("Enhorabuena! Has sacado cara! Ahora tienes %.2f e!\n", total);
		}
		else{
			total = total - apuesta;
			printf("Mala suerte... Has perdido la apuesta D:, ahora tienes %.2f e.\n", total);
		}
	}

	return main;

}

void Ejercicio15(){

	int ro1, ndo, ro3;

	printf("Dame el primero numero entero: \n");
	scanf_s("%i", &ro1);
	printf("Dame el segundo numero entero: \n");
	scanf_s("%i", &ndo);
	printf("Dame el tercero numero entero: \n");
	scanf_s("%i", &ro3);

	if (ro1 > ndo && ro1 > ro3)
		printf("El primer numero %i es el más grande\n", ro1);
	else if (ndo > ro1 && ndo > ro3)
		printf("El segundo numero %i es el más grande\n", ndo);
	else if (ro3 > ndo && ro3 > ro1)
		printf("El tercer numero %i es ell más garnde\n", ro3);

	if (ro1 < ndo && ro1 < ro3)
		printf("El primer numero %i es el más pequeño\n", ro1);
	else if (ndo < ro1 && ndo < ro3)
		printf("El segundo numero %i es el más pequeño\n", ndo);
	else if (ro3 < ndo && ro3 < ro1)
		printf("El tercer numero %i es ell más pequeño\n", ro3);

	return main;
}

void Ejercicio16(){

	int num;

	printf("Dame un numero y te digo si es mutiplo de 2 y 5: \n");
	scanf_s("%i", &num);

	if (num % 2 == 0 & num % 5 == 0)
		printf("El numero %i es mutiplo de 2 y 5\n", num);
	else
		printf("El numero %i NO es mutiplo de 2 y 5\n", num);

	return main;
}

void Ejercicio17(){

	float nota;

	printf("Dame tu nota de examen: \n");
	scanf_s("%f", &nota);

	if (nota < 0)
		printf("Esa nota no existe en el rango de valores de un examen\n");
	else if (nota < 5)
		printf("Tienes un suspenso\n");
	else if (nota >= 5 && nota < 7)
		printf("Tienes un aprobado\n");
	else if (nota >= 7 && nota < 9)
		printf("Tienes un notable\n");
	else  if (nota >= 9 && nota < 10)
		printf("Tienes un sobresaliente\n");
	else if (nota == 10)
		printf("Tienes una matricula de honor\n");
	else if (nota > 10)
		printf("Esa nota no existe en el rango de valores de un examen\n");


	return main;
}

void Ejercicio18(){
	int opc = 0, dias, nmes;
	char smes[20];
	printf("------------- -------Menu-------------------------------\n");
	printf("1. Dar el nombre del mes, con el siguiente Formato:\n");
	printf("Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto\n");
	printf("Septiembre, Octubre, Noviembre, Diciembre\n\n\n");
	printf("2. Dar el numero del mes, con  el siguiente Formato:\n");
	printf("Un numero entero que va del 1 al 12\n\n\n");
	printf("Elige la opcion <1> o <2>\n");
	printf("----------------------------------------------------------\n");
	scanf_s("%i", &opc);

	switch (opc){
	case 1:// Por el nombre del mes
		fflush(stdin); //limpia el buffer
		printf("Dame el nombre del mes:\n");
		gets(smes);//lee una cadena de caracteres
		if (strcmp(smes, "Febrero") == 0){ // compara
			printf("Dar una de las 2 opciones <0>Bisiesto <1> NO bisiesto\n");
			scanf("%i", &dias);
			if (dias == 1){
				printf(" Febrero tiene 28 dias\n");
			}
			else{
				printf(" Febrero tiene 29 dias\n");
			}
		}
		if (strcmp(smes, "Enero") == 0 || strcmp(smes, "Marzo") == 0 || strcmp(smes, "Mayo") == 0 || strcmp(smes, "Julio") == 0 || strcmp(smes, "Agosto") == 0 || strcmp(smes, "Octubre") == 0 || strcmp(smes, "Diciembre") == 0){
			printf("%s Tiene 31 dias\n", smes);
		}
		if (strcmp(smes, "Abril") == 0 || strcmp(smes, "Junio") == 0 || strcmp(smes, "Septiembre") == 0 || strcmp(smes, "Noviembre") == 0){
			printf("%s Tiene 30 dias\n", smes);
		}
		break;


	case 2:// Por un número del mes
		printf("Dame el numero  del mes:\n");
		scanf("%i", &nmes);
		switch (nmes){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Tu mes tiene 31 días\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Tu mes tiene 30 dias\n");
			break;
		case 2:
			printf("Dar una de las 2 opciones <0>Bisiesto <1> NO bisiesto\n");
			scanf("%i", &dias);
			if (dias == 0){ printf(" Tu mes tiene 29 dias\n"); }
			if (dias == 1){ printf(" Tu mes tiene 28 dias\n"); }
			break;

		}
		break;
	}

	return main;
}

void Ejercicio19(){

	int dia, mes;

	printf("Pon los datos que te pedimos a continuacion y te diremos tu signo zodiacal");
	printf("Escribe tu dia de nacimento en NUMERO: ");
	scanf_s("%i", &dia);
	printf("Escribe tu mes de nacimiento en NUMERO: ");
	scanf_s("%i", &mes);

	if (dia <= 0 || dia >= 32 || mes <= 0 || mes >= 12){
		printf("Los valores escritos no pertenecen al sistema de dias y meses del planeta Tierra");
		system("pause");
		return 0;
	}

	if ((dia >= 20 && mes == 3) || (dia <= 19 && mes == 4))
		printf("Tu signo zodiacal es Aries\n");
	else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5))
		printf("Tu signo zodiacal es Tauro\n");
	else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6))
		printf("Tu signo zodiacal es Geminis\n");
	else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7))
		printf("Tu signo zodiacal es Cancer\n");
	else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8))
		printf("Tu signo zodiacal es Leo\n");
	else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9))
		printf("Tu signo zodiacal es Virgo\n");
	else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10))
		printf("Tu signo zodiacal es Libra\n");
	else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11))
		printf("Tu signo zodiacal es Escorpio\n");
	else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12))
		printf("Tu signo zodiacal es Sagitario\n");
	else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1))
		printf("Tu signo zodiacal es Capricornio\n");
	else if ((dia >= 20 && mes == 1) || (dia <= 17 && mes == 2))
		printf("Tu signo zodiacal es Acuario\n");
	else if ((dia >= 18 && mes == 2) || (dia <= 19 && mes == 3))
		printf("Tu signo zodiacal es Piscis\n");


	return main;
}

void Ejercicio22(){

	short numero;
	int encierto = 0;

	srand(time(NULL));

	numero = rand() % 10 + 1;

	do{
		printf("Intenta esbrinar el numero del 1 al 10: ");
		scanf_s("%i", &encierto);
		if (encierto <= 0 || encierto >= 11)
			printf("Idiota! Esto no es un numero del 1 al 10!\n");
		else if (encierto == numero)
			printf("Enhorabuena! Has encertado el numero oculto!\n");
	} while (encierto != numero);

	return main;
}

void Ejercicio23(){

	int intentocontraseña, i = 0;

	for (i == 1; i <= 2; i++){
		printf("Ecribe la contraseña correcta. Tienes %i intentos: ", 3 - i);
		scanf_s("%i", &intentocontraseña);
		if (intentocontraseña == CONTRASEÑA){
			printf("Enhorabuena!\n");
			system("pause");
			return main;
		}
	}

	printf("Lo siento, contraseña equivocada\n");
	return main;
}

void Ejercicio24(){

	int i, num;

	printf("Dame un numero para hacer su tabla de mutiplicar: ");
	scanf_s("%i", &num);

	for (i = 1; i <= 10; i++)
		printf("%i*%i=%i\n", num, i, num*i);


	return main;
}

void Ejercicio25(){

	int contnum = 0, contprintf = 0;
	float num = 0, total = 0;

	do{
		printf("Dame el numero %i positivo: ", ++contprintf);
		scanf_s("%f", &num);
		total = total + num;
		++contnum;
	} while (num >= 0);


	printf("La mediana de numeros positivos es %.2f\n", (total - num) / (contnum - 1));

	return main;
}

void Ejercicio26(){

	int i = 1, num = 0;

	printf("Con que metodo queres hacer la suma del 1 al 100:\n");
	printf("1. FOR\n");
	printf("2. WHILE\n");
	printf("1. DO WHILE\n");
	scanf_s("%i", &num);

	switch (num){

	case 1:
		for (i == 1; i <= 100; i++)
			printf("%i\n", i);
		break;

	case 2:
		while (i <= 100){
			printf("%i\n", i++);
		}
		break;

	case 3:
		do{
			printf("%i\n", i++);
		} while (i <= 100);
		break;

	}

	return main;
}

void Ejercicio27(){

	int cantidad = 0, i = 1, positivos = 0, negativos = 0;
	float num = 0;

	printf("Cuantos numeros quieres leer? ");
	scanf_s("%i", &cantidad);

	for (i == 1; i <= cantidad; i++){
		printf("Escribe el %i numero: ", i);
		scanf_s("%f", &num);

		if (num >= 0)
			++positivos;
		else
			++negativos;
	}

	printf("Hay %i numeros positivos\n", positivos);
	printf("Hay %i numeros negativos\n", negativos);

	return main;
}

void Ejercicio28(){

	float base = 0;
	int exponente = 0, i = 0;

	printf("Dame una base y un exponente entero positivo\n");
	printf("Base: ");
	scanf_s("%f", &base);
	printf("Exponente: ");
	scanf_s("%i", &exponente);

	while (exponente < 0) {
		printf("Has dado un exponente no valido\n");
		printf("Da otro exponente: ");
		scanf_s("%i", &exponente);
	}

	printf("Lo que has puesto %.2f^%i da %.2f\n", base, exponente, pow(base, exponente));
	printf("\n");

	for (i == 0; i <= exponente; i++)
		printf("%.2f^%i da %.2f\n", base, i, pow(base, i));


	return main;
}

void Ejercicio29(){

	int i = 32;

	for (i == 32; i <= 127; ++i)
		printf("El numero %i corresponde a %c de la tabla ASCII\n", i, i);


	return main;
}