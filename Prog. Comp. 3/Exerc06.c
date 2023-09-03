#include <stdio.h>

main(){
	char senha[1], x[] = "abacate";
	printf("Digite sua senha\n");
	scanf("%s", &senha);
	
	if (strcmp(senha, x)==0 ){
		printf("ACESSO PERMITIDO");
	}
	else{
		printf("ACESSO NEGADO");
	}
}
