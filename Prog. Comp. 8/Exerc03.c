#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i;
	int *pont;
	
	struct cadastro{
		char nome[40], endereco[60];
		int telefone;
	};
	
	
	printf("Quantos clientes você deseja cadastrar?\n");
	scanf("%d", &n);
	
	struct cadastro cadastros[n];

	for(i=0; i<n; i++){
		printf("Digite o nome do cliente %d\n", i+1);
		fflush(stdin);
		scanf("%[^\n]", &cadastros[i].nome);
		printf("Digite o endereço desse cliente\n");
		fflush(stdin);
		scanf("%[^\n]", &cadastros[i].endereco);
		printf("Digite o telefone desse cliente\n");
		fflush(stdin);
		scanf("%d", &cadastros[i].telefone);
	}
	for(i=0; i<n; i++){
		printf("\t\tDados do cliente %d:\nNome: %s\nEndereço: %s\nTelefone: %d\n\n", i+1, cadastros[i].nome, cadastros[i].endereco, cadastros[i].telefone);
	}
	system("PAUSE");
	return 0;
}

