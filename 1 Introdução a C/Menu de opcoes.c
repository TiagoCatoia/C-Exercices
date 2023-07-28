#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,opcao,resultado;
	
	printf("Digite o valor de dois n�meros");
	printf("\nPrimero n�mero:");
	scanf("%d", &num1);
	printf("Segundo n�mero:");
	scanf("%d", &num2);
	
	printf("\n1 - Primeiro n�mero elevado ao segundo n�mero");
	printf("\n2 - Raiz quadrada de cada n�mero");
	printf("\n3 - Raiz c�bica de cada n�mero");
	printf("\n4 - Produto dos n�meros");
	printf("\nEscolha uma op��o:");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("\n%d elevado a %d = %.2f", num1, num2, pow(num1, num2));
			break;
		case 2:
			printf("\nRa�z quadrada de %d = %.2f e a Ra�z quadrada de %d = %.2f", num1, pow(num1,0.5), num2, pow(num2,0.5));
			break;
		case 3:
			printf("\nRa�z c�bica de %d = %.2f e a Ra�z c�bica de %d = %.2f", num1, cbrt(num1), num2, cbrt(num2));
			break;
		case 4:
			printf("\nO Produto de %d por %d = %d", num1, num2, num1 * num2);
		default:
			printf("\nOp��o inv�lida, por favor escolha uma op��o v�lida (1 a 4)");
			break;
	}
}
