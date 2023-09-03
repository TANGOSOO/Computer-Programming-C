#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int i, j, cont=0;
	char mat[4] [4];
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("Digite o caractere da linha %d e coluna %d\n", i+1, j+1);
			fflush(stdin);
			mat[i] [j]=getchar();
			if (islower(mat[i] [j])){
				cont=cont+1;
			}
		}
	}
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("%c ", mat[i] [j]);
		}
		printf("\n");
	}
	if (cont>=1){
		printf("Existem %d letra(s) minuscula(s) nessa matriz", cont);
	}
	else{
		printf("Não existe letra minuscula nessa matriz\n");
	}
	system("PAUSE");
}
