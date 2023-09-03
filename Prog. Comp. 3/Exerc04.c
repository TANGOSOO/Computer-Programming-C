#include <stdio.h>

main(){
	int x;
	printf("Digite um número\n");
	scanf("%d", &x);
	
	if (x%2==0){
		printf("Esse número é par\n");
	}
	else{
		printf("Esse número é impar\n");
	}
}
