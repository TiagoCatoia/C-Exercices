#include<stdio.h>
#include<locale.h>

/* EXERCICIO 6
	Fa�a um programa que receba um numero N
	fornecido pelo usu�rio e mostre os N termos da s�rie a
	seguir:
	S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m
	Por fim, imprima a soma total da s�rie.
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	float n = 1, m = 1, soma = 0;
	
	printf("Para ver os N termos da s�rie (S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m)");
	printf("\nDigite um n�mero inteiro: ");
	scanf("%d", &i);
	
	printf("S = ");
	while (n <= i){
		if (n == i){
			printf("%.0f/%.0f", n, m);
		}
		else {
			printf("%.0f/%.0f + ", n, m);
		}
		soma += n/m;
		n ++;
		m += 2;
	}
	printf("\nSoma total da s�rie: %.2f", soma);
}
