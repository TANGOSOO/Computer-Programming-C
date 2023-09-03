#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i, cont=0, tamanho;
	char str[30], letra;
	
	printf("Digite uma frase\n");
	scanf("%[^\n]", &str);
	
	tamanho=strlen(str);
	for(i=0; i<tamanho; i++){
		if(toupper(str[i])=='A' || toupper(str[i])=='E' || toupper(str[i])=='I' || toupper(str[i])=='O' || toupper(str[i])=='U'){
			cont++;	
		}
	}
	printf("Essa palavra tem %d vogais\nDigite uma letra para substituir todas essas vogais\n", cont);
	fflush(stdin);
	scanf("%c", &letra);
	
	for(i=0; i<tamanho; i++){
		if(toupper(str[i])=='A' || toupper(str[i])=='E' || toupper(str[i])=='I' || toupper(str[i])=='O' || toupper(str[i])=='U'){
			str[i]=letra;	
		}
	}
	printf("%s\n", str);
	system("PAUSE");
	return 0;
}

