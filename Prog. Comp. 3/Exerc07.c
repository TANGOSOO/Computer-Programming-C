#include <stdio.h>

main(){
	int a, b;
	printf("Digite 2 números\n");
	scanf("%d %d", &a, &b);
	if (a%b==0){
		printf("é divisível", a, b);
	}
	else{
		printf("não é divisível", a, b);
	}
}
