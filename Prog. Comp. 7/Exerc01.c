#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char str[40];
	
	printf("Digite uma frase\n");
	scanf("%[^\n]", &str);
	printf("%s\n", str);
	system("PAUSE");
	return 0;
}
