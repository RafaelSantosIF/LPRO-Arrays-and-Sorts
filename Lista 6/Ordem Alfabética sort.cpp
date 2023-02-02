#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordSort(int vet[], int tamVet){
	int min, aux;
	
	for(int i=0; i<tamVet; i++){
		min = i;
		for(int j=(i+1); j<tamVet; j++){
			if(vet[j] < vet[min]){
				min = j;
			}
		}
		if(i != min){
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
		}
	}
}

int main(void){
	char frase[250];
	char alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
	int tamVet = sizeof(frase) / sizeof(int);
	int num=1;
	
	printf("Escreva: ");
	gets(frase);
	int tamAlf = strlen(frase);
	int alfanum[tamAlf];
	
	for(int i=0; i<tamVet; i++){
		if(frase[i] == '\0'){
			break;
		}
		
		for(int j=0; j<27; j++){
			if(frase[i] == alfabeto[j]){
				break;
			} else {
				num++;	
			}	
		}
		alfanum[i] = num;
		num =1;	
	}
	
	
	ordSort(alfanum, tamAlf);

	for(int h=0; h<tamAlf; h++){
		
	}

	/*for(int k=0; k<tamAlf; k++){
		printf("%d ", alfanum[k]);
	}*/
	
	return 0;
}
