#include <stdio.h>

main(){
	int x;
	printf("Digite um n�mero\n");
	scanf("%d", &x);
	
	if (x%2==0){
		printf("Esse n�mero � par\n");
	}
	else{
		printf("Esse n�mero � impar\n");
	}
}
