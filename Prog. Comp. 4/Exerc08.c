#include <stdio.h>
#include <stdlib.h>

int main(){
	char x;
	float valor, med, som=0, cont=0;
	do{
		printf("Qual o valor da mercadoria?\n");
		scanf("%f", &valor);
		som=som+valor;
		cont=cont+1;
		printf("Mais mercadorias (S/N)?\n");
		scanf("%s", &x);
	}while (x=='s' || x=='S');
	med=som/cont;
	printf("O valor total é: %.2f\nA media é: %.2f\n", som, med);
	system("PAUSE");
}
