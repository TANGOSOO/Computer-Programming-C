#include <stdio.h>
#include <stdlib.h>

int fatorial(x){
	if(x==0){
		return 1;
	}
	return x*fatorial(x-1);
}
int main(){
	
	unsigned long long int result;
	int x;
	
	printf("Digite um n�mero para saber seu fatorial\n");
	scanf("%d", &x);
	
	result=fatorial(x);
	printf("O fatorial de %d � %lli", x, result);
}

