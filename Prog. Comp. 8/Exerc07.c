#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	typedef enum {separado=1, solteiro, casado, viuvo}tipo_estado;
	
	struct pessoa{
		char nome[40];
		int idade;
		float peso;
		tipo_estado est_civil;
	};
	
	struct pessoa pessoas[3];
	for(i=0; i<3; i++){
		printf("Digite o nome da %d pessoa\n", i+1);
		fflush(stdin);
		scanf("%[^\n]", &pessoas[i].nome);
		printf("Digite a idade dessa pessoa\n");
		fflush(stdin);
		scanf("%d", &pessoas[i].idade);
		printf("Digite o peso dessa pessoa\n");
		fflush(stdin);
		scanf("%f", &pessoas[i].peso);
		printf("Digite o estado civil dessa pessoa(1 Separado/2 Solteiro/3 Casado/ 4 Viuvo)\n");
		fflush(stdin);
		scanf("%d", &pessoas[i].est_civil);
	}
	for(i=0; i<3; i++){
		printf("\t\tInformações da %d pessoa:\nNome: %s\nIdade: %d\nPeso: %.2f\nEstado civil: ", i+1, pessoas[i].nome, pessoas[i].idade, pessoas[i].peso);
		switch(pessoas[i].est_civil){
			case 1: printf("Separado\n"); break;
			case 2: printf("Solteiro\n"); break;
			case 3: printf("Casado\n"); break;
			case 4: printf("Viuvo\n"); break;
		}
	}
	system("PAUSE");
	return 0;
}

