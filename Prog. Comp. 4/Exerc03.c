#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=1;
	while (x<=100){
		if (x%3==0){
			printf("%d\n", x);
		}
	x=x+1;
	}
	system("PAUSE");
}
