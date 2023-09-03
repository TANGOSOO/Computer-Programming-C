#include <stdio.h>

main(){
	float n1, n2, p1, p2, media;
	printf("Digite a nota 1 e a nota 2 do aluno\n");
	scanf("%f %f", &n1, &n2);
	printf("Digite o peso da nota 1 e o peso da nota 2\n");
	scanf("%f %f", &p1, &p2);
	
	media=(n1*p1+n2*p2)/(p1+p2);
	printf("%.2f\n", media);
	
	if (media>=7){
		printf("Aluno aprovado\n");
	}
	else{
		if (media<7 && media>=4){
		printf("Aluno de final\n");
	}
		else{
			printf("Aluno reprovado\n");
		}
	}
}
