#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, menor=999999999, mat[5] [5];
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("Digite o valor da %d linha e da %d coluna da matriz\n", i+1, j+1);
			scanf("%d", &mat[i] [j]);
			if (mat[i] [j]<menor){
				menor=mat[i] [j];
			}
		}
	}
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("%5d ", mat[i] [j]);
		}
		printf("\n");
	}
	printf("O menor valor da matriz é %d\n", menor);
	system("PAUSE");
}
