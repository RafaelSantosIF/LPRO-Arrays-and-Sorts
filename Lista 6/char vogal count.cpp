#include <stdio.h>
#include <stdlib.h>

int main(void){
	char frase[250];
	char vogais[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
	int total;
	int tamVet = sizeof(frase) / sizeof(int);
	
	printf("Escreva: ");
	gets(frase);
	
	for(int i=0; i<tamVet; i++){
		for(int j=0; j<10; j++){
			if(frase[i] == vogais[j]){
				total += 1;
			}	
		}
		if(frase[i] == '\0'){
			break;
		}
	}
	
	printf("A Frase possui %d Vogais. \n", total);
	
	return 0;
}
