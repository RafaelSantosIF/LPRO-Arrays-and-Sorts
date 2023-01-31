#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*int ord(int vet[]){
	int tamVet = sizeof(vet) / sizeof(int);
	int aux;
	
	for(int i=0; i<tamVet; i++){
		for(int j=i; j<tamVet; j++){
			if(vet[0+j] > vet[1+j]){
				aux = vet[0+j];
				vet[0+j] = vet[1+j];
				vet[1+j] = aux;
			}
		}	
	}
}*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int val[10];
	int tamVet = sizeof(val) / sizeof(int);
	
	for(int i=0; i<tamVet; i++){
		printf("Valor %02d: ", i+1);
		scanf("%f", &val[i]);
	}
	
	int aux;
	int vet[10];
	for(int g=0; g<tamVet; g++){
		vet[g] = val[g];
	}
	
	for(int v=0; v<tamVet; v++){
		for(int j=v; j<tamVet; j++){
			if(vet[0+j] > vet[1+j]){
				aux = vet[0+j];
				vet[0+j] = vet[1+j];
				vet[1+j] = aux;
			}
		}	
	}
	
	for(int k=0; k<tamVet; k++){
		printf("%d \n", vet[k]);
	}
		
	return 0;
}
