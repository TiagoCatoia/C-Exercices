#include<stdio.h>
#include<locale.h>

/* EXERCICIO 4
	Fa�a um programa que leia um n�mero inteiro >= 0 e
	calcule o seu fatorial.
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, fatorial = 1, i = 1;
	
	printf("Digite um n�mero inteiro para ver seu fatorial: ");
	scanf("%d", &num);
	while (num < 0){
		printf("%d n�o � >= 0, tente novamente!", num);
		printf("\nDigite um n�mero inteiro para ver seu fatorial: ");
		scanf("%d", &num);
	}
	while (i <= num){
		fatorial *= i;
		i ++;
	}
	printf("Fatorial de %d � %d", num, fatorial);
}
