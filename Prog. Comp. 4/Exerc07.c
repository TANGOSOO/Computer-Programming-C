#include <stdio.h>
#include <stdlib.h>

int main(){
	int quantidade, cont=0;
	float valor, soma, med;
	printf("Quantas mercadorias voc� tem em estoque?\n");
	scanf("%d", &quantidade);
	while (quantidade>0){
		printf("Qual o valor da mercadoria?\n");
		scanf("%f", &valor);
		soma=soma+valor;
		quantidade=quantidade-1;
		cont=cont+1;
	}
	med=soma/cont;
	printf("O valor total �: %.2f\nA m�dia �: %.2f\n", soma, med);
	system("PAUSE");
}
