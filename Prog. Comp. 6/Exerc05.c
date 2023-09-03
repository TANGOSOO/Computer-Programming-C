#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, mat[3] [3];
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite o valor da linha %d e coluna %d\n", i+1, j+1);
			scanf("%d", &mat[i] [j]);
		}
	}
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", mat[i] [j]);
		}
		printf("\n");
	}
	system("PAUSE");
}
