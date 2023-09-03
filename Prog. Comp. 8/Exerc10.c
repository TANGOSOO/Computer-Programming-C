#include <stdio.h>
#include <stdlib.h>

struct info{
	char nome[40];
	int idade;
	long long int cpf;
};

int main(){
	
	int x[40] [40] [40];
	struct info pessoa;
	
	printf("Digite o nome dessa pessoa\n");
	scanf("%[^\n]", &pessoa.nome);
	printf("Digite a idade dessa pessoa\n");
	scanf("%d", &pessoa.idade);
	printf("Digite o CPF dessa pessoa\n");
	scanf("%lld", &pessoa.cpf);
	
	printf("\t\tInformações dessa pessoa:\nCPF: %lld\nNome: %s\nidade: %d\n", pessoa.cpf, pessoa.nome, pessoa.idade);
	
	system("PAUSE");
	return 0;
}

