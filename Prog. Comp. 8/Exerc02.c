#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	float som=0;
	
	struct aluno{
		char nome[40];
		int matricula;
		float notas[3], media;
	};
	
	struct aluno aluno;
	
	printf("Digite o nome do aluno\n");
	scanf("%[^\n]", &aluno.nome);
	printf("Digite o número da matrícula desse aluno\n");
	scanf("%d", &aluno.matricula);
	
	for(i=0; i<3; i++){
		printf("Digite a %d nota desse aluno\n", i+1);
		scanf("%f", &aluno.notas[i]);
		som=som+aluno.notas[i];
	}
	aluno.media=som/3;
	
	printf("\t\tDados do aluno:\nNome: %s\nMatrícula: %d\nNotas %.2f %.2f %.2f\nMédia: %.2f\n", aluno.nome, aluno.matricula, aluno.notas[0], aluno.notas[1], aluno.notas[2], aluno.media);
	system("PAUSE");
	return 0;
}

