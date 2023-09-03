#include <stdio.h>
#include <stdlib.h>

enum dias_semana{Domingo=1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main(){
	
	enum dias_semana dias;
	int n;
	
	printf("digite um número inteiro de 1 a 7\n");
	scanf("%d", &n);
	printf("dia %d é: ", n);
	switch(n){
		case 1: printf("Domingo\n"); break;
		case 2: printf("Segunda\n"); break;
		case 3: printf("Terça\n"); break;
		case 4: printf("Quarta\n"); break;
		case 5: printf("Quinta\n"); break;
		case 6: printf("Sexta\n"); break;
		case 7: printf("Sábado\n"); break;
	}
	system("PAUSE");
	return 0;
}

