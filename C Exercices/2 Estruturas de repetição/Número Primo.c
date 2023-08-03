#include<stdio.h>
#include<locale.h>

/* EXERCICIO 2
	Faça um programa que receba um número inteiro
	maior que 1 e verifique se o número é primo. Considere que um número primo é divisível apenas por
	1 e por ele mesmo.
	Obs: Faça três versões do programa, uma para
	cada estrutura de repetição (for, while e do- while).
*/

// UTILIZANDO WHILE
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, divisor_count = 1,divisores = 0;
	
	printf("Digite um número inteiro maior que 1: ");
	scanf("%d", &num);
	while (num < 1){
		printf("%d é menor do que 1, tente novamente!", num);
		printf("\nDigite um número inteiro maior que 1: ");
		scanf("%d", &num);
	}
	while (divisor_count <= num){
		if (num % divisor_count == 0){
			divisores += 1;
		}
		divisor_coun ++;
	}	
	if (divisores > 2){
		printf("%d não é primo", num);
	}
	else{
		printf("%d é primo", num);
	}
}

//UTILIZANDO FOR
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, divisor_count = 1,divisores = 0;
	
	printf("Digite um número inteiro maior que 1: ");
	scanf("%d", &num);
	for (; num < 1;){
		printf("%d é menor do que 1, tente novamente!", num);
		printf("\nDigite um número inteiro maior que 1: ");
		scanf("%d", &num);
	}
	for(; divisor_count <= num; divisor_count++){
		if (num % divisor_count == 0){
			divisores += 1;
		}
	}
	if (divisores > 2){
		printf("%d não é primo", num);
	}
	else{
		printf("%d é primo", num);
	}
}

// UTILIZANDO O DO-WHILE
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, divisor_count = 1,divisores = 0;
	
	printf("Digite um número inteiro maior que 1: ");
	scanf("%d", &num);
	while (num < 1){
		printf("%d é menor do que 1, tente novamente!", num);
		printf("\nDigite um número inteiro maior que 1: ");
		scanf("%d", &num);
	}
	do { // Nesse caso o do-while não faz muita diferença já que independente se fosse while ou o do-while desde o começo iria entrar no loop, devido ao valor definido ao divisor_count anteriormente
		if (num % divisor_count == 0){
			divisores += 1;
		}
		divisor_count ++;
	} while (divisor_count <= num);
	if (divisores > 2){
		printf("%d não é primo", num);
	}
	else{
		printf("%d é primo", num);
	}
}
