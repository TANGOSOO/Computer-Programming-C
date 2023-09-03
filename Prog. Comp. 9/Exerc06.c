#include <stdio.h>
#include <stdlib.h>

int potencia(int x,int y){
	int result=1;
	
	if(y==0){
		return 1;
	}
	for(y; y>=1; y--){
		result=result*x;
	}
	return result;
}

int main(){
	
	int x, y, result;
	
	printf("Digite a base e o expoente\n");
	scanf("%d %d", &x, &y);
	result=potencia(x, y);
	printf("%d elevado a %d é igual a %d\n", x, y, result);
	
	system("pause");
	return 0;
}

