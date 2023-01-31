#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char frase[250];
	
	printf("Escreva: ");
	gets(frase);
	
	printf("A Frase digitada tem %d caracteres", strlen(frase));
	
	return 0;
}
