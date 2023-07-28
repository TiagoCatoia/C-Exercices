#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float lado1,lado2,lado3;
	
	printf("Digite o valor do primero lado de um triângulo:");
	scanf("%f",&lado1);
	
	printf("Digite o valor do segundo lado desse triângulo:");
	scanf("%f",&lado2);
	
	printf("Digite o valor do terceiro lado desse triângulo:");
	scanf("%f",&lado3);
	
	if (lado1 + lado2 > lado3 || lado1 + lado3 > lado2 || lado2 + lado3 > lado1)
		if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
			printf("O trinângulo formado por esses lados é equilátero!");
		else
			if (lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2 || lado2 == lado3 && lado2 != lado1)
				printf("O trinângulo formado por esses lados é isósceles!");
			else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
				printf("O trinângulo formado por esses lados é escaleno!");
	else
		printf("Não é possível formar um trinângulo com esse valores!");
}
