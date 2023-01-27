#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct MM {
	int maior, menor, ima, ime;
}; typedef struct MM size;

size SORT(int vet[], int i, int j){
	size SORT;
	SORT.maior = vet[0];
	SORT.menor = vet[0];
	
	for(i; i<j; i++){
		if (SORT.maior < vet[i]){
			SORT.maior = vet[i];
			SORT.ima = i;	
		} 
		if (SORT.menor > vet[i]){
			SORT.menor = vet[i];
			SORT.ima = i;	
		} 
	}
	
	return SORT;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	size sort;
	int val[10];
	int tamVet = sizeof(val) / sizeof(int);
	
	for(int i=0; i<tamVet; i++){
		printf("Valor %02d: ", i+1);
		scanf("%f", &val[i]);
	}
	
	sort = SORT(val, 0, tamVet);
	
	system("cls");
	
	printf("Maior número: %d - Indice[%d]\n", sort.maior, sort.ima);
	printf("Menor número: %d - Indice[%d]\n", sort.menor, sort.ime);
	
	return 0;	
}
