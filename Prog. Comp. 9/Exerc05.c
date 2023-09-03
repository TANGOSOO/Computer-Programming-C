#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i , array[5], *x=&array[0];
	for (i=0; i<5; i++){
		printf("Digite o %d valor\n", i+1);
		scanf("%d", &array[i]);
	}
	for (i=0; i<5; i++){
	printf("%d ", x[i]*2);
	}
	printf("\n");
	system("pause");
	return 0;
}

