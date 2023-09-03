#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){
	unsigned long long int result=1;
	for(x; x>1; x--){
		result=result*x;
	}
	return result;
}

int main(){
	
	int x;
	unsigned long long int result;
	
	printf("Digite um número para saber seu fatorial\n");
	scanf("%d", &x);
	
	result=fatorial(x);
	printf("O fatorial de %d é igual a %lli\n", x, result);
	
	system("pause");
	return 0;
}

