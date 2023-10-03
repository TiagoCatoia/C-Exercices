#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*
Construa uma função que receba dois
parâmetros m e n, aloque uma matriz de ordem
m x n e retorne um ponteiro para a matriz
alocada em tempo de execução. Crie ainda
outra função que receba por parâmetro um
ponteiro para matriz e libere a área de
memória alocada. Finalmente, crie um
programa (main) que teste/use as duas
funções criadas
*/

int *criarMatriz(int m, int n) {
	if (m <= 0 || n <= 0) {
		printf("\nNão foi póssível criar a matriz devido o valor das suas dimensões!");
		exit(0);
	}
	int *mat, i;
	mat = (int*) malloc(sizeof(int)*m*n);
	for (i=0; i<(m*n); i++) {
		printf("%dº Valor: ", i+1);
		scanf("%d", mat+i);
	}
	return mat;
}

void imprimirMatriz(int *mat, int m, int n)
{
	int i;
	printf("\nImprimindo a matriz");
	for (i=0; i<(m*n); i++) {
		if (i % n == 0) {
			printf("\n| ");
		}
		printf("%d | ", *(mat+i));
	}
}

void liberaMemoria(int *mat)
{
	free(mat);
}

main () {
	setlocale(LC_ALL, "Portuguese");
	int *matPonteiro, m, n;
	
	printf("Digite a dimensão da matriz\n");
	printf("Quantidade de linhas: ");
	scanf("%d", &m);
	printf("Quantidade de colunas: ");
	scanf("%d", &n);
	
	matPonteiro = criarMatriz(m, n);
	imprimirMatriz(matPonteiro, m, n);
	liberaMemoria(matPonteiro);
}
