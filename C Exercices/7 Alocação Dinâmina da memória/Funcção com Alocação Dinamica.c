#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*
Faça uma função que receba um valor n e crie
dinamicamente um vetor de n elementos inteiros e
retorne um ponteiro. Em seguida, crie uma função que
receba um ponteiro para um vetor e um valor n e
imprima os n elementos desse vetor. Construa
também uma função que receba um ponteiro para um
vetor e libere esta área de memória. Por fim, crie uma
função principal que leia um valor n e chame a função de
alocação de memória. Depois, a função principal deve ler
os n elementos desse vetor. Então, a função principal deve
chamar a função de impressão dos n elementos do vetor
criado e, finalmente, liberar a memória alocada através da
função criada para liberação.
*/

int *criarVetorDinamic(int n)
{
	int *vet, i;
	vet = (int*) malloc(sizeof(int)*n);
	
	if (!vet) {
		printf("\nErro: Não foi possível criar o vetor!\n");
		exit(0);
	}
	for (i=0; i<n; i++) {
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", vet+i);
	}
	return vet;
}
void imprimirVetor(int *vet, int n)
{
	int i;
	printf("\nValores do vetor: ");
	printf("\n|");
	for (i=0; i<n; i++) {
		printf("%d|", *(vet+i));
	}
}

void liberaMemoria(int *vet)
{
	free(vet);
}

main () {
	setlocale(LC_ALL, "Portuguese");
	int *vet, n;
	
	printf("Digite o tamnho do vetor: ");
	scanf("%d", &n);
	
	vet = criarVetorDinamic(n);
	imprimirVetor(vet, n);
	
	printf("\nLimpando a mémoria...");
	liberaMemoria(vet);
}
