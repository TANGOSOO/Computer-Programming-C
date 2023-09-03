#include <stdio.h>
#include <stdlib.h>

int main(){
	float n, som=0, med, maior=-999999999, menor=999999999, x=10;
	int negativo=0;
	while (x>0){
		printf("Digite um número\n");
		scanf("%f", &n);
		if (n>maior){
			maior=n;
		}
		if (n<menor){
			menor=n;
		}
		if (n<0){
			negativo=negativo+1;
		}
		som=som+n;
		x=x-1;
	}
	med=som/10;
	printf("Quantidade de negativos: %d\nMaior: %.2f\nMenor: %.2f\nSomatorio: %.2f\nMedia: %.2f\n", negativo, maior, menor, som, med);
	system("PAUSE");
}
