#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, maior=-999999999, array[8];
	for (i=0; i<8; i++){
		printf("Digite o valor da posição %d\n", i+1);
		scanf("%d", &array[i]);
		if (array[i]>maior){
			maior=array[i];
		}
	}
	printf("O maior valor digitado foi %d\n", maior);
	system("PAUSE");
}
