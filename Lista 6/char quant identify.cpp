#include <stdio.h>
#include <stdlib.h>

int main(void){
	char frase[250], letra;
	int total;
	int tamVet = sizeof(frase) / sizeof(int);
	
	printf("Escreva: ");
	gets(frase);
	printf("Letra para procurar: ");
	scanf("%c", &letra);
	
	for(int i=0; i<tamVet; i++){
		if(frase[i] == letra){
			total += 1;
		}
		if(frase[i] == '\0'){
			break;
		}		
	}
	
	printf("A letra %c se repete %d vezes nesta frase. \n", letra, total);
	
	return 0;
}
