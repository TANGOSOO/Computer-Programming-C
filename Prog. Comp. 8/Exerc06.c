#include <stdio.h>
#include <stdlib.h>

enum meses_ano{Janeiro=1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

int main(){
	
	enum meses_ano meses;
	
	printf("Digite um n�mero de 1 a 12\n");
	scanf("%d", &meses);
	printf("O m�s %d �: ", meses);
	switch(meses){
		case 1: printf("Janeiro, 31 dias\n"); break;
		case 2: printf("Fevereiro, 28 dias\n"); break;
		case 3: printf("Mar�o, 31 dias\n"); break;
		case 4: printf("Abril, 30 dias\n"); break;
		case 5: printf("Maio, 31 dias\n"); break;
		case 6: printf("Junho, 30 dias\n"); break;
		case 7: printf("Julho, 31 dias\n"); break;
		case 8: printf("Agosto, 31 dias\n"); break;
		case 9: printf("Setembro, 30 dias\n"); break;
		case 10: printf("Outubro, 31 dias\n"); break;
		case 11: printf("Novembro, 30 dias\n"); break;
		case 12: printf("Dezembro, 31 dias\n"); break;
	}
	system("PAUSE");
	return 0;
}

