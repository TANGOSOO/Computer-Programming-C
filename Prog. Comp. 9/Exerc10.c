#include <stdio.h>
#include <stdlib.h>

int fibonacci(x){
	if(x==0){
		return 0;
	}
	if(x==1){
		return 0;
	}
	if(x==2){
		return 1;
	}
	return fibonacci(x-1)+fibonacci(x-2);
}

int main(){
	
	int result;
	int x, n1=0, n2=1, n3=1, y;
	
	do{
		printf("Digite um número inteiro entre 0 e 46\n");
		scanf("%d", &x);
	}while(x<0 || x>46);
	
	y=fibonacci(x);
	printf("%d é o termo %d da série de fibonacci\nEssa é a série até esse termo:\n", y, x);
	
	for(x; x>=1; x--){
		printf("%d, ", n1);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	printf("\b\b. \n");
	system("pause");
	return 0;
}

