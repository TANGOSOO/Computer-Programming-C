#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Digite um número\n");
	scanf("%d", &num);
	if (num%2==0 || num%3==0){
		printf("Esse número não é primo\n");
	}
	else{
		printf("Esse número é primo\n");
	}
	system("PAUSE");
}
