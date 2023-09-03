#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i, tamanho;
	char str[40];
	
	printf("Digite uma frase para deixar toda em maiúscula\n");
	scanf("%[^\n]", &str);
	
	tamanho=strlen(str);
	
	for(i=0; i<=tamanho; i++){
		printf("%c", toupper(str[i]));
	}
	system("PAUSE");
	return 0;
}

