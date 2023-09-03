#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct cord{
		int posx, posy;
	};
	
	struct cord cord1;
	printf("Digite as cordenadas de X e Y\n");
	scanf("%d %d", &cord1.posx, &cord1.posy);
	printf("Cordenadas: (%d,%d)\n", cord1.posx, cord1.posy);
	
	system("PAUSE");
	return 0;
}

