#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i, tamanho=0;
	char str[40];
	
	printf("Digite uma frase\n");
	scanf("%[^\n]", &str);
	
	tamanho=strlen(str);
	
	for(i=tamanho; i>=0; i--){
		if(str[i]!='\0'){
			printf("%c", toupper(str[i]));
		}
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

