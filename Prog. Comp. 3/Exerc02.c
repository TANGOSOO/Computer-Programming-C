#include <stdio.h>

main(){
	float x;
	printf("Digite um valor\n");
	scanf("%f", &x);
	if (x>0){
		printf("%f é positivo", x);
	}
	else{
		if (x<0){
			printf("%f é negativo", x);
		}
		else{
			printf("%f é igual a zero", x);
		}
	}
}
