#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, n1=0, n2=1, soma;
	do{
		printf("Quantos termos da série de Fibonacci você deseja saber?\n");
		scanf("%d", &x);
	}while(x<0 || x>46);
	while (x>0){
		printf("%d, ", n1);
		soma=n1+n2;
		n1=n2;
		n2=soma;
		x=x-1;
	}
	printf("\n");
	system("PAUSE");
}
