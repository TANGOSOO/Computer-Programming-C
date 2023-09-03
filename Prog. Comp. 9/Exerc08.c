#include <stdio.h>
#include <stdlib.h>

void NFibonacci(x){
	int n1=0, n2=1, n3=1;
	
	for(x; x>=1; x--){
		printf("%d, ", n1);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	printf("\b\b. \n");
}
int main(){
	
	int x;
	
	do{
		printf("Digite um número inteiro entre 0 e 46\n");
		scanf("%d", &x);
	}while(x<0 || x>46);
	
	NFibonacci(x);
	
	system("pause");
	return 0;
}

