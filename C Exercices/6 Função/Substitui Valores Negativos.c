#include <stdio.h>
#include <locale.h>

/*  EXERCÍCIO 4
Crie uma função que receba como parâmetro um
vetor de 10 números inteiros e substitua todos os
valores negativos de A por zero. O vetor resultante
será mostrado pelo programa principal.
*/

#define True 1
#define False 0

void substituiValoresNegativos(int numeros[], int *negativo, int i) {
	for (i=0; i<10; i++) {
		if (numeros[i] < 0) {
			*negativo = True;
			numeros[i] = 0;
		}
	}
}

main() {
	setlocale(LC_ALL, "Portuguese");
	int numeros[10], negativo = False, i=0;
	
	printf("Digite 10 números: \n");
	for (i=0; i<10; i++) {
		printf("%dº Número: ", i+1);
		scanf("%d", &numeros[i]);
	}
	printf("\nSubstituindo valores negativos por 0...\n");
	substituiValoresNegativos(numeros, &negativo, i);
	
	if (negativo == False){
		printf("\nVocê não digitou nenhum número negativo!");
		printf("\nVetor: ");
		for (i=0; i<10; i++) {
			printf("%d ", numeros[i]);
		}
	}
	else {
		printf("\nVetor Atualizado: ");
		for (i=0; i<10; i++) {
			printf("%d ", numeros[i]);
		}	
	}
}
