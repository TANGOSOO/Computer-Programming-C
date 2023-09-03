#include <stdio.h>]
#include <stdlib.h>

int main(){
	int i, j, x, y, mat1[3] [3], mat2[3] [3], matr[3] [3];
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Digite o valor da linha %d e da coluna %d da primeira matriz\n", i+1, j+1);
			scanf("%d", &mat1[i] [j]);
		}
	}
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Digite o valor da linha %d e da coluna %d da segunda matriz\n", i+1, j+1);
			scanf("%d", &mat2[i] [j]);
		}
	}
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			matr[i] [j]=mat1[i] [j]+mat2[i] [j];
		}
	}
	printf("Primeira matriz:\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d ", mat1[i] [j]);
		}
		printf("\n");
	}
	printf("Segunda matriz:\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d ", mat2[i] [j]);
		}
		printf("\n");
	}
	printf("Matriz soma:\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d ", matr[i] [j]);
		}
		printf("\n");
	}	
	system("PAUSE");
}
