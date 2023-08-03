#include<stdio.h>
#include<locale.h>

/* EXERCICIO 4
	Faça um programa que leia um número inteiro >= 0 e
	calcule o seu fatorial.
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, fatorial = 1, i = 1;
	
	printf("Digite um número inteiro para ver seu fatorial: ");
	scanf("%d", &num);
	while (num < 0){
		printf("%d não é >= 0, tente novamente!", num);
		printf("\nDigite um número inteiro para ver seu fatorial: ");
		scanf("%d", &num);
	}
	while (i <= num){
		fatorial *= i;
		i ++;
	}
	printf("Fatorial de %d é %d", num, fatorial);
}
