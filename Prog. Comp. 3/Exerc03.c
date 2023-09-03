#include <stdio.h>

main(){
	float nota1, nota2, media;
	printf("Digite as 2 notas\n");
	scanf("%f %f", &nota1, &nota2);
	
	media=(nota1+nota2)/2;
	
	if (media>=6){
		printf("Aluno aprovado com média %.2f\n", media);
	}
	else{
		printf("Aluno reprovado com média %.2f\n", media);
	}
}
