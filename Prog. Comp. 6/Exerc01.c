#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vet[5];
	for (i=0; i<5; i++){
		vet[i]=i+1;
	}
	for (i=0; i<5; i++){
		printf("%d, ", vet[i]);	
	}
	printf("\n");
	system("PAUSE");
}
