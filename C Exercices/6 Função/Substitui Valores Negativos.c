#include <stdio.h>
#include <locale.h>

/*  EXERC�CIO 4
Crie uma fun��o que receba como par�metro um
vetor de 10 n�meros inteiros e substitua todos os
valores negativos de A por zero. O vetor resultante
ser� mostrado pelo programa principal.
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
	
	printf("Digite 10 n�meros: \n");
	for (i=0; i<10; i++) {
		printf("%d� N�mero: ", i+1);
		scanf("%d", &numeros[i]);
	}
	printf("\nSubstituindo valores negativos por 0...\n");
	substituiValoresNegativos(numeros, &negativo, i);
	
	if (negativo == False){
		printf("\nVoc� n�o digitou nenhum n�mero negativo!");
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
