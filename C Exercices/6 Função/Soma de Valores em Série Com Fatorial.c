#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCÍCIO 5
Faça uma função chamada calcularSerie() que
calcule e apresente os primeiros 10 termos da série a
seguir.

Soma = 100/0! + 99/1! + 98/2! + 97/3! + ...

A função deverá chamar outra função que receba um
inteiro >= 0 como parâmetro e retorne o seu fatorial,
para calcular cada termo. Além de apresentar os termos
da série, a função deverá ainda retornar a soma total
dos termos, que será impressa pelo programa principal.
*/

float fatorial(int i, float count, float denominador) {
	if (i == 0){
		return 1;
	}
	else {
		denominador = 1;
		count = 1;
		while (count <= i) {
			denominador *= count;
			count++;
		}
		return denominador;
	}
}

float calcularSerie(float *soma, int i, float count, float numerador, float denominador) {
	printf("\nSoma = ");
	
	for (i=0, numerador = 100; i<10; i++, numerador--) {
		denominador = fatorial(i, count, denominador);
		if (i != 9){
			printf("%.0f/%d! + ", numerador, i);	
		}
		else {
			printf("%.0f/%d!\n", numerador, i);
		}
		*soma += numerador/denominador;
	}
	return *soma;
}

main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	float soma = 0, denominador, count, numerador;

	printf("Calculando os 10 primeiros termos da série: \n");
	
	calcularSerie(&soma, i, count, numerador, denominador);
	printf("\nResultado da soma: %.2f", soma);
}
