#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Digite um n�mero\n");
	scanf("%d", &num);
	if (num%2==0 || num%3==0){
		printf("Esse n�mero n�o � primo\n");
	}
	else{
		printf("Esse n�mero � primo\n");
	}
	system("PAUSE");
}
