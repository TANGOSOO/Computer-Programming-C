#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int tamanho1, tamanho2, i, j, cont=0;
	char str1[100], str2[40];
	
	printf("Digite uma frase\n");
	scanf("%[^\n]", &str1);
	printf("Digite uma palavra ou frase para ver quantas vezes ela aparece na frase digitada\n");
	fflush(stdin);
	scanf("%[^\n]", &str2);
	
	tamanho1=strlen(str1);
	tamanho2=strlen(str2);

    for(i=0; i<tamanho1; i++){
        if(str1[i]==str2[j]){
            j++;
        }
        else{
            j=0;
        }
        if(j==tamanho2){
            cont++;
    	}
	}
	printf("A segunda string aparece %d vezes na primeira\n", cont+1);
	system("PAUSE");
	return 0;
}

