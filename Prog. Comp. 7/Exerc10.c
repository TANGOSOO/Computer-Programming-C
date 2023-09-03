#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int tamanho1, tamanho2;
	char str1[40], str2[40];
	
	printf("Digite uma frase\n");
	scanf("%[^\n]", &str1);
	fflush(stdin);
	printf("Digite outra frase\n");
	scanf("%[^\n]", &str2);
	
	tamanho1=strlen(str1);
	tamanho2=strlen(str2);
	
	if(tamanho1==tamanho2){
		printf("As 2 strings tem o mesmo tamanho\n");
	}
	if(tamanho1!=tamanho2){
		if(tamanho1>tamanho2){
			printf("A primeira string é maior\n");
		}
		else{
			printf("A segunda string é maior\n");
		}
	}
	if(strcmp(str1, str2)==0){
		printf("As 2 strings são iguais\n");
	}
	if(strcmp(str1, str2)!=0){
		if(strcmp(str1, str2)<0){
			printf("A primeira string vem primeiro\n");
		}
		else{
			printf("A segunda string vem primeiro\n");
		}
	}
	system("PAUSE");
	return 0;
}

