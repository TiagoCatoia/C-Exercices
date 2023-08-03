#include<stdio.h>
#include<locale.h>

/* EXERCICIO 7
	Faça um programa que mostre quantia de termos
	da sequência de Fibonacci pedido.
	Ex: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a = 0, b = 1, c, i = 0, termos;
	
	printf("Digite quantos termos da sequência de Fibonacci deseja ver: ");
	scanf("%d", &termos);
	while (i < termos){
		c = a + b;
		printf("%d ", a);
		a = b;
		b = c;
		i ++;
	}
}
