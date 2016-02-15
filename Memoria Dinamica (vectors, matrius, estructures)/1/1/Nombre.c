#include <stdio.h>
#include <stdlib.h>

int main(){
	//Memoria Dinamica

	int i;
	int N;
	int *vector;

	printf("Dame un valor para N: ");
	scanf_s("%i", &N);

	vector = (int*)malloc(N*sizeof(int));
	if (vector == NULL){
		printf("No se ha podido reservar la memoria.\n");
	}
	else{
		for (i = 0; i < N; i++){
			*(vector + i) = i;
		}
		for (i = 0; i < N; i++){
			printf("%i ", *(vector + i));
		}
		printf("\n");

		printf("Dame otro valor para N: ");
		scanf_s("%i", &N);

		vector = (int*)malloc(N*sizeof(int));
		if (vector == NULL){
			printf("No se ha podido reservar la memoria.\n");
		}
		else{
			for (i = 0; i < N; i++){
				*(vector + i) = i;
			}
			for (i = 0; i < N; i++){
				printf("%i ", *(vector + i));
			}
			printf("\n");
		}
	}
		

	system("pause");
	return 0;
}