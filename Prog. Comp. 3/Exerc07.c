#include <stdio.h>

main(){
	int a, b;
	printf("Digite 2 n�meros\n");
	scanf("%d %d", &a, &b);
	if (a%b==0){
		printf("� divis�vel", a, b);
	}
	else{
		printf("n�o � divis�vel", a, b);
	}
}
