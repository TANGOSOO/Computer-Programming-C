#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, array[10], soma=0;
	for (i=0; i<10; i++){
		printf("Digite o valor da posição %d\n", i+1);
		scanf("%d", &array[i]);
		soma=soma+array[i];
	}
	printf("A soma de todos os números digitados é igual a %d\n", soma);
	system("PAUSE");
}
