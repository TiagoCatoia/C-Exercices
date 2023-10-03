#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*
Fa�a uma fun��o que receba um valor n e crie
dinamicamente um vetor de n elementos inteiros e
retorne um ponteiro. Em seguida, crie uma fun��o que
receba um ponteiro para um vetor e um valor n e
imprima os n elementos desse vetor. Construa
tamb�m uma fun��o que receba um ponteiro para um
vetor e libere esta �rea de mem�ria. Por fim, crie uma
fun��o principal que leia um valor n e chame a fun��o de
aloca��o de mem�ria. Depois, a fun��o principal deve ler
os n elementos desse vetor. Ent�o, a fun��o principal deve
chamar a fun��o de impress�o dos n elementos do vetor
criado e, finalmente, liberar a mem�ria alocada atrav�s da
fun��o criada para libera��o.
*/

int *criarVetorDinamic(int n)
{
	int *vet, i;
	vet = (int*) malloc(sizeof(int)*n);
	
	if (!vet) {
		printf("\nErro: N�o foi poss�vel criar o vetor!\n");
		exit(0);
	}
	for (i=0; i<n; i++) {
		printf("Digite o %d� valor: ", i+1);
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
	
	printf("\nLimpando a m�moria...");
	liberaMemoria(vet);
}
