#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, num1=0, num2=0, op, cont;
	printf("1 para soma 2 para subtração 3 para multiplicação ou 4 para todas");
	scanf("%d", &x);
	switch(x){
		case 1:
			while(num1<=10){
				printf("Tabuada de soma do %d\n", num1);
				while(num2<=10){
					op=num1+num2;
					printf("%d + %d = %d\n", num2, num1, op);
					num2=num2+1;
				}
				num1=num1+1;
				num2=0;
			}
			break;
		case 2:
			while(num1<=10){
				printf("Tabuada de subtração do %d\n", num1);
				while(num2<=10){
					op=num2-num1;
					printf("%d - %d = %d\n", num2, num1, op);
					num2=num2+1;
				}
				num1=num1+1;
				num2=0;
			}
			break;
		case 3:
			while(num1<=10){
				printf("Tabuada de multiplicação do %d\n", num1);
				while(num2<=10){
					op=num2*num1;
					printf("%d * %d = %d\n", num2, num1, op);
					num2=num2+1;
				}
				num1=num1+1;
				num2=0;
			}
			break;
		default:
			while(num1<=10){
				printf("Tabuada de soma do %d\n", num1);
				while(num2<=10){
					op=num1+num2;
					printf("%d + %d = %d\n", num2, num1, op);
					num2=num2+1;
				}
				num1=num1+1;
				num2=0;
			}
			num1=0;
			while(num1<=10){
				printf("Tabuada de subtração do %d\n", num1);
				while(num2<=10){
					op=num2-num1;
					printf("%d - %d = %d\n", num2, num1, op);
					num2=num2+1;
				}
				num1=num1+1;
				num2=0;
			}
			num1=0;
			while(num1<=10){
				printf("Tabuada de multiplicação do %d\n", num1);
				while(num2<=10){
					op=num2*num1;
					printf("%d * %d = %d\n", num2, num1, op);
					num2=num2+1;
				}
				num1=num1+1;
				num2=0;
			}
	 	
	}
	system("PAUSE");
}

