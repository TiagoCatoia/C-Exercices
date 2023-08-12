#include <stdio.h>
#include <locale.h>
/* EXERCICIO 2
Faça um programa que crie uma matriz A de
tamanho n x n de valores inteiros informados pelo
usuário. O programa deverá verificar se A é uma matriz
identidade e imprimir uma mensagem informando o
usuário. Considere que a matriz identidade possui
todos os elementos da diagonal principal iguais a 1 e
os demais elementos iguais a 0.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, j = 0, n, A[3][3], contadorLinha = 1, contadorColuna = 1, identidade = 1;
	
	printf("Digite a dimensão da matriz (n x n): ");
	scanf("%d", &n);
	printf("Digite os valores da primeira linha da matriz");
	
	for(i=0; i<n; i++, contadorLinha++){
		printf("\n%dº Linha\n", contadorLinha);
		 contadorColuna = 1;
		for(j=0; j<n; j++, contadorColuna++){
			printf("%dº Coluna: ", contadorColuna);
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
		printf("A matriz é indentidade");
	}
	else{
		printf("A matriz não é identidade");
	}
}
