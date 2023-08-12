#include <stdio.h>
#include <locale.h>
/* EXERCICIO 2
Fa�a um programa que crie uma matriz A de
tamanho n x n de valores inteiros informados pelo
usu�rio. O programa dever� verificar se A � uma matriz
identidade e imprimir uma mensagem informando o
usu�rio. Considere que a matriz identidade possui
todos os elementos da diagonal principal iguais a 1 e
os demais elementos iguais a 0.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, j = 0, n, A[3][3], contadorLinha = 1, contadorColuna = 1, identidade = 1;
	
	printf("Digite a dimens�o da matriz (n x n): ");
	scanf("%d", &n);
	printf("Digite os valores da primeira linha da matriz");
	
	for(i=0; i<n; i++, contadorLinha++){
		printf("\n%d� Linha\n", contadorLinha);
		 contadorColuna = 1;
		for(j=0; j<n; j++, contadorColuna++){
			printf("%d� Coluna: ", contadorColuna);
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<n && identidade == 1; i++){
		for(j=0; j<n && identidade == 1; j++){
			if (i == j){
				if (A[i][j] != 1){
					identidade = 0;
				}
			}
			else if (A[i][j] != 0){
				identidade = 0;
			}
		}
	}
	if (identidade == 1){
		printf("A matriz � indentidade");
	}
	else{
		printf("A matriz n�o � identidade");
	}
}
