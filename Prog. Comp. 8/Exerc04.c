#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int n, i, k, tamanho, op=0, cont=0, num;
	char pnome[20], nome2[20];
	
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
	printf("Digite 1 para buscar pelo primeiro nome ou 2 para buscar pelo telefone\n");
	scanf("%d", &op);
	if(op==1){
		printf("Digite o primeiro nome\n");
		scanf("%s", &pnome);
		tamanho=strlen(pnome);
		for(k=0; k<n; k++){
			i=0;
			for(i=0; i<tamanho; i++){
				nome2[i]=cadastros[k].nome[i];
			}
			if(strcmp(nome2, pnome)==0){
				printf("\t\tDados do cliente %d:\nNome: %s\nEndereço: %s\nTelefone: %d\n\n", k+1, cadastros[k].nome, cadastros[k].endereco, cadastros[k].telefone);
				cont++;
			}
		}
		printf("Usuários encontrados: %d\n", cont);
	}
	if(op==2){
		printf("Digite o número do celular\n");
		scanf("%d", &num);
		for(k=0; k<n; k++){
			if(cadastros[k].telefone==num){
				printf("\t\tDados do cliente %d:\nNome: %s\nEndereço: %s\nTelefone: %d\n\n", k+1, cadastros[k].nome, cadastros[k].endereco, cadastros[k].telefone);
				cont++;
			}
			printf("Usuários encontrados: %d\n", cont);
		}
	}
	if(cont==0){
		printf("Nenhum usuário encontrado\n");
	}
	system("PAUSE");
	return 0;
}
