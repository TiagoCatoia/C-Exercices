#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float lado1,lado2,lado3;
	
	printf("Digite o valor do primero lado de um tri�ngulo:");
	scanf("%f",&lado1);
	
	printf("Digite o valor do segundo lado desse tri�ngulo:");
	scanf("%f",&lado2);
	
	printf("Digite o valor do terceiro lado desse tri�ngulo:");
	scanf("%f",&lado3);
	
	if (lado1 + lado2 > lado3 || lado1 + lado3 > lado2 || lado2 + lado3 > lado1)
		if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
			printf("O trin�ngulo formado por esses lados � equil�tero!");
		else
			if (lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2 || lado2 == lado3 && lado2 != lado1)
				printf("O trin�ngulo formado por esses lados � is�sceles!");
			else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
				printf("O trin�ngulo formado por esses lados � escaleno!");
	else
		printf("N�o � poss�vel formar um trin�ngulo com esse valores!");
}
