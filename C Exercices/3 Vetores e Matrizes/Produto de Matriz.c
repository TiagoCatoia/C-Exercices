#include <stdio.h>
#include <locale.h>
/* EXERCICIO 5
Fa�a um programa que crie uma matriz A de
dimens�o m x n e outra matriz B de dimens�o n x p.
O programa dever� calcular e apresentar a
multiplica��o de A por B, como segue no exemplo
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, j = 0, y = 0, n1, n2, m, p, contadorLinha = 1, contadorColuna = 1, identidade = 1, produto_soma = 0;
	
	printf("Digite a dimens�o da primeira matriz");
	printf("\nQuantidade de linhas: ");
	scanf("%d", &m);
	printf("Quantidade de colunas: ");
	scanf("%d", &n1);
	printf("Digite os valores da primeira linha da matriz");
	int A[m][n1];
	
	for(i=0; i<m; i++, contadorLinha++){
		printf("\n%d� Linha\n", contadorLinha);
		for (j=0, contadorColuna = 1; j<n1 ; j++, contadorColuna++){
			printf("%d� Coluna: ", contadorColuna);
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("Digite a dimens�o da segunda matriz");
	printf("\nQuantidade de linhas: ");
	scanf("%d", &n2);
	printf("Quantidade de colunas: ");
	scanf("%d", &p);
	int B[n2][p];
	int C[m][p];
	printf("Digite os valores da primeira linha da matriz");
	
	for(contadorLinha=1, contadorColuna=1, i=0; i<n2; i++, contadorLinha++){
		printf("\n%d� Linha\n", contadorLinha);
		for (j=0, contadorColuna=1; j<p ; j++, contadorColuna++){
			printf("%d� Coluna: ", contadorColuna);
			scanf("%d", &B[i][j]);
		}
	}
	if (n1 != n2){
		printf("N�o � poss�vel realizar a multiplica��o, pois a quantidade de colunas da 1� matriz deve ser igual a quantidade de linhas da 2� matriz!");
	}
	else{
		for(i=0 ; i<m; i++){
			for(y=0 ; y<p ; y++){
				produto_soma = 0;
				for(j=0; j<n1 ;j++){
					produto_soma += A[i][j] * B[j][y];
				}
				C[i][y] = produto_soma;
			}
		}	
	}
	printf("\nMatriz produto de A x B:\n");
	for(contadorLinha=1, i=0; i<m; i++, contadorLinha++){
		printf("\n%d� Linha:\n", contadorLinha);
		for (j=0; j<p; j++){
			printf("%d  ", C[i][j]);
		}
	}
}
