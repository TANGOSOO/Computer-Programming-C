#include <stdio.h>

main(){
	float a, b, c;
	printf("Digite o tamanho das retas a, b e c\n");
	scanf("%f %f %f", &a, &b, &c);
	if (a+b>c && a+c>b && c+b>a){
		printf("Essas retas podem formar um triangulo\n");
		if (a==b && a==c){
			printf("Esse triangulo � equil�tero\n");
			return 0;
		}
		if (a==b && b!=c || c==a && a!=b || b==c && c!=a){
			printf("Esse triangulo � is�sceles\n");
			return 0;
		}
		else{
			printf("Esse triangulo � escaleno\n");
			return 0;
		}
	}
	else{
		printf("Essas retas n�o podem formar um triangulo\n");
	}
}
