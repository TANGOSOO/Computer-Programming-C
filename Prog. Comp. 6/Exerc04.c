#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char i, x[20], y[20];
	printf("Digite uma palavra\n");
	scanf("%s", &x);
	
	strcpy(y, x);
	strrev(y);
	if (strcmp(x, y)==0){
		printf("É um palindromo\n");
	}
	else{
		printf("Não é um palindromo\n");
	}
	system("PAUSE");
}
