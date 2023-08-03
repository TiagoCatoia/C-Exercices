#include<stdio.h>
#include<locale.h>

/* EXERCICIO 2
	Fa�a um programa que receba um n�mero inteiro
	maior que 1 e verifique se o n�mero � primo. Considere que um n�mero primo � divis�vel apenas por
	1 e por ele mesmo.
	Obs: Fa�a tr�s vers�es do programa, uma para
	cada estrutura de repeti��o (for, while e do- while).
*/

// UTILIZANDO WHILE
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, divisor_count = 1,divisores = 0;
	
	printf("Digite um n�mero inteiro maior que 1: ");
	scanf("%d", &num);
	while (num < 1){
		printf("%d � menor do que 1, tente novamente!", num);
		printf("\nDigite um n�mero inteiro maior que 1: ");
		scanf("%d", &num);
	}
	while (divisor_count <= num){
		if (num % divisor_count == 0){
			divisores += 1;
		}
		divisor_coun ++;
	}	
	if (divisores > 2){
		printf("%d n�o � primo", num);
	}
	else{
		printf("%d � primo", num);
	}
}

//UTILIZANDO FOR
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, divisor_count = 1,divisores = 0;
	
	printf("Digite um n�mero inteiro maior que 1: ");
	scanf("%d", &num);
	for (; num < 1;){
		printf("%d � menor do que 1, tente novamente!", num);
		printf("\nDigite um n�mero inteiro maior que 1: ");
		scanf("%d", &num);
	}
	for(; divisor_count <= num; divisor_count++){
		if (num % divisor_count == 0){
			divisores += 1;
		}
	}
	if (divisores > 2){
		printf("%d n�o � primo", num);
	}
	else{
		printf("%d � primo", num);
	}
}

// UTILIZANDO O DO-WHILE
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, divisor_count = 1,divisores = 0;
	
	printf("Digite um n�mero inteiro maior que 1: ");
	scanf("%d", &num);
	while (num < 1){
		printf("%d � menor do que 1, tente novamente!", num);
		printf("\nDigite um n�mero inteiro maior que 1: ");
		scanf("%d", &num);
	}
	do { // Nesse caso o do-while n�o faz muita diferen�a j� que independente se fosse while ou o do-while desde o come�o iria entrar no loop, devido ao valor definido ao divisor_count anteriormente
		if (num % divisor_count == 0){
			divisores += 1;
		}
		divisor_count ++;
	} while (divisor_count <= num);
	if (divisores > 2){
		printf("%d n�o � primo", num);
	}
	else{
		printf("%d � primo", num);
	}
}
