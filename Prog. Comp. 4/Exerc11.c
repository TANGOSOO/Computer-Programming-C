#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, z=1, k=1, h;
	printf("Qual o tamanho do triangulo?\n");
	scanf("%d", &x);
	
	x=x+x;
	for (y=1; y<=x; y=y+1){
		h=y;
		x=x-1;
		while (z<=x){
			printf(" ");
			z=z+1;
		}
		while (k<=y){
			printf("*");
			k=k+1;
		}
		while (y!=1){
			printf("*");
			y=y-1;
		}
		y=h;
		k=1;
		z=1;
		printf("\n");
	}
	system("PAUSE");
}
