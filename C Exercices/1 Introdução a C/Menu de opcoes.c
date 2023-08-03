#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,opcao,resultado;
	
	printf("Digite o valor de dois números");
	printf("\nPrimero número:");
	scanf("%d", &num1);
	printf("Segundo número:");
	scanf("%d", &num2);
	
	printf("\n1 - Primeiro número elevado ao segundo número");
	printf("\n2 - Raiz quadrada de cada número");
	printf("\n3 - Raiz cúbica de cada número");
	printf("\n4 - Produto dos números");
	printf("\nEscolha uma opção:");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("\n%d elevado a %d = %.2f", num1, num2, pow(num1, num2));
			break;
		case 2:
			printf("\nRaíz quadrada de %d = %.2f e a Raíz quadrada de %d = %.2f", num1, pow(num1,0.5), num2, pow(num2,0.5));
			break;
		case 3:
			printf("\nRaíz cúbica de %d = %.2f e a Raíz cúbica de %d = %.2f", num1, cbrt(num1), num2, cbrt(num2));
			break;
		case 4:
			printf("\nO Produto de %d por %d = %d", num1, num2, num1 * num2);
		default:
			printf("\nOpção inválida, por favor escolha uma opção válida (1 a 4)");
			break;
	}
}
