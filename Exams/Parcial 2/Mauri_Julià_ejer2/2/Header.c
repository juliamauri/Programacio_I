#include "Header.h"

int pideNumElementos(){
	int n;
	printf("Dame el numero de elementos del vector: ");
	scanf_s("%i", &n);
	printf("\n");
	return n;
}

void leeElementos(int *a, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("Dame el elemento [%i]: ", i);
		scanf_s("%i", &(*(a + i)));
	}
	printf("\n");
}

int productoEscalar(int *ptr1, int ne, int *ptr2){
	int total = 0, i, temp=0;//Temp coje el resultado de la multiplicacion para guardar a total sumando
	for (i = 0; i<ne; i++){
		temp = *(ptr1 + i) * *(ptr2 + i);
		total += temp;
	}
	return total;
}