#include <stdio.h>

main(){
	float num1, num2, resultado;
	char x;
	
	printf("Digite um número, um operador e outro número\n");
	scanf("%f %c %f", &num1, &x, &num2);
	if (x=='+'){
		resultado=num1+num2;
	}
	if (x=='-'){
		resultado=num1-num2;
	}
	if (x=='/'){
		resultado=num1/num2;
	}
	if (x=='*'){
		resultado=num1*num2;
	}
	printf("%.2f%c%.2f=%.2f", num1, x, num2, resultado);
}
