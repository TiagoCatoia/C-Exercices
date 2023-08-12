#include <stdio.h>
#include <locale.h>
/* EXERCICIO 3
Crie um programa que preencha uma matriz 3x3 de
números inteiros e verifique se a matriz é simétrica.
A matriz será simétrica se e somente se todo
elemento A[i,j] = A[j,i].
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, j = 0, A[3][3], contadorLinha = 1, contadorColuna = 1, simetrica = 1;
	
	printf("Digite os valores da primeira linha da matriz (3x3)");
	
	for(i=0; i<3; i++, contadorLinha++){
		printf("\n%dº Linha\n", contadorLinha);
		 contadorColuna = 1;
		for(j=0; j<3; j++, contadorColuna++){
			printf("%dº Coluna: ", contadorColuna);
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<3 && simetrica == 1; i++){
		for (j=0; j<1 && simetrica == 1; j++){
			if (A[i][j] != A[j][i]){
				simetrica = 0;
			}
		}
	}
	if (simetrica == 1){
		printf("A matriz é simétrica");
	}
	else{
		printf("A matriz não é simétrica");
	}
}
