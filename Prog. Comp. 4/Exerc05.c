#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, cont=1;
	do{
		printf("Digite um número\n");
		scanf("%d", &n);
	}while(n<=0);
	while (n>0){
		printf("%d, ", cont);
		cont=cont+4;
		n=n-1;
	}
	system("PAUSE");
}
