#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char str[30];
	printf("Digite frase para ver as 4 primeiras letras\n");
	scanf("%[^\n]", &str);
	printf("%.4s\n", str);
	system("PAUSE");
	return 0;
}


