#include <stdio.h>
#include <stdlib.h>

int main(void){
	char frase[250];
	int tamVet = sizeof(frase) / sizeof(int);
	
	printf("Escreva: ");
	gets(frase);
	
	for(int i=0; i<tamVet; i++){
		if((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u')){
			printf("%c \t", frase[i]);
		}
	}
	
	return 0;
}
