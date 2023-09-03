#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, maior, menor, som, med, x, cont, cont2=0;
	printf("Digite 2 valores\n");
	scanf("%f %f", &n1, &n2);
	if (n1>n2){
		maior=n1;
		menor=n2;
	}
	if (n2>n1){
		maior=n2;
		menor=n1;
	}
	x=maior-menor;
	cont=maior;
	while (x>=0){
		som=som+cont;
		cont=cont-1;
		x=x-1;
		cont2=cont2+1;
	}
	med=som/cont2;
	printf("A soma dos valores entre %.2f e %.2f é %.2f\nA média %.2f\n", menor, maior, som, med);
	system("PAUSE");
}
