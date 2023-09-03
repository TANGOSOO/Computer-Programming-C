#include <stdio.h>
#include <stdlib.h>

union uniao{
	int i;
	char c;
};

int main(){
		
	union uniao uni;
	
	printf("Digite o valor de um inteiro\n");
	scanf("%d", &uni.i);
	printf("%c\n", uni.c);
	
	system("PAUSE");
	return 0;
}
