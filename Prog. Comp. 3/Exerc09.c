#include <stdio.h>

main(){
	float a, b, c;
	printf("Digite o tamanho das retas a, b e c\n");
	scanf("%f %f %f", &a, &b, &c);
	if (a+b>c && a+c>b && c+b>a){
		printf("Essas retas podem formar um triangulo\n");
		if (a==b && a==c){
			printf("Esse triangulo é equilátero\n");
			return 0;
		}
		if (a==b && b!=c || c==a && a!=b || b==c && c!=a){
			printf("Esse triangulo é isósceles\n");
			return 0;
		}
		else{
			printf("Esse triangulo é escaleno\n");
			return 0;
		}
	}
	else{
		printf("Essas retas não podem formar um triangulo\n");
	}
}
