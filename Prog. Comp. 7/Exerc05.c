#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int tamanho, i, j;
	char str[40];
	
	printf("Digite uma frase\n");
	scanf("%[^\n]", &str);
	
	strcpy(str, strrev(str));
	printf("%s\n", str);
	system("PAUSE");
	return 0;
}

