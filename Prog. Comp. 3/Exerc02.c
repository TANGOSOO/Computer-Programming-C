#include <stdio.h>

main(){
	float x;
	printf("Digite um valor\n");
	scanf("%f", &x);
	if (x>0){
		printf("%f � positivo", x);
	}
	else{
		if (x<0){
			printf("%f � negativo", x);
		}
		else{
			printf("%f � igual a zero", x);
		}
	}
}
