#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=32;
	while (x<=255){
		printf("Posição: %d Caractere: %c\n", x, x);
		x=x+1;
	}
	system("PAUSE");
}
