#include <stdio.h>

main(){
	float salario;
	printf("Quanto � o seu sal�rio?\n");
	scanf("%f", &salario);
	if (salario<=600){
		salario=salario+salario*0.30;
		printf("Seu novo sal�rio � %.2f", salario);
		return 0;
	}
	if (600<salario && salario<=1100){
		salario=salario+salario*0.25;
		printf("Seu novo sal�rio � %.2f", salario);
		return 0;
	}
	if (1100<salario && salario<=2400){
		salario=salario+salario*0.20;
		printf("Seu novo sal�rio � %.2f", salario);
		return 0;
	}
	if (2400<salario && salario<=3550){
		salario=salario+salario*0.15;
		printf("Seu novo sal�rio � %.2f", salario);
		return 0;
	}
	if (3550<salario){
		salario=salario+salario*0.10;
		printf("Seu novo sal�rio � %.2f", salario);
		return 0;
	}
}
