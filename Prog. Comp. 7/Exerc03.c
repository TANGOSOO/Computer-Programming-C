#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i, cont=0;
	char str[30];
	printf("Digite uma frase\n");
	scanf("%[^\n]", &str);
	
	for(i=0; i<30; i++){
		if(str[i]=='\0'){
			break;
		}
		if(str[i]!=' '){
			cont++;
		}
	}
	printf("Essa string tem %d letras\n", cont);
	system("PAUSE");
	return 0;
}

