#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, cont=0, x, pri=0, mat[5] [5];
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("Digite o valor da linha %d e da coluna %d\n", i+1, j+1);
			scanf("%d", &mat[i] [j]);
			for (x=1; x<=mat[i] [j]; x++){
				if (mat[i] [j]%x==0){
					cont=cont+1;
				}
			}
			if (cont==2){
				pri=pri+1;
			}
			cont=0;
		}
	}
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("%3d ", mat[i] [j]);
		}
		printf("\n");
	}
	if (pri==25){
		printf("Todos os números dessa matriz são primos\n");
	}
	if (pri>=1 &&pri<=24){
		printf("Essa matriz tem %d números primos\n", pri);
	}
	if (pri==0){
		printf("Essa matriz não tem nenhum número primo\n");
	}
	system("PAUSE");
}
