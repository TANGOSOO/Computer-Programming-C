#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, soma=0, mat[4] [4];
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("Digite o valor da %d linha e da %d coluna\n", i+1, j+1);
			scanf("%d", &mat[i] [j]);
			if(i==j){
				soma=soma+mat[i] [j];
			}
		}
	}
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("%3d ", mat[i] [j]);
			}
				printf("\n");
		}
	printf("A soma de todos os valores da diagonal principal da matriz é %d\n", soma);
	system("PAUSE");
}
