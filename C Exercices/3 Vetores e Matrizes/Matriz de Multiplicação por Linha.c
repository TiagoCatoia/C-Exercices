#include <stdio.h>
#include <locale.h>
/*  Lista de Exerc�cios � Algoritmos e Programa��o II

EXERCICIO 6 da lista
Crie um programa que preencha uma matriz 3 x 3 de n�meros inteiros e some 
cada uma das linhas, armazenando o resultado das somas em um vetor. Em 
seguida, o programa dever� multiplicar cada elemento da matriz pelo elemento da 
linha correspondente no vetor e mostrar a matriz resultante.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int linha = 0, coluna = 0, matriz[3][3], matrizResultante[3][3], somaElementosLinha = 0, somaDasLinhas[3], contadorLinha = 1, contadorColuna = 1;
	
	printf("Digite os elementos de uma matriz 3 x 3:");
	for (linha=0; linha<3; linha++, contadorLinha++){
		printf("\n%d� Linha\n", contadorLinha);
		for (coluna=0, contadorColuna=1; coluna<3 ; coluna++, contadorColuna++){
			printf("%d� Coluna: ", contadorColuna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	for (linha = 0, coluna = 0; linha<3; linha++){
		for (somaElementosLinha = 0, coluna = 0; coluna<3; coluna++){
			somaElementosLinha += matriz[linha][coluna];
		}
		somaDasLinhas[linha] = somaElementosLinha;
	}
	
	for (linha = 0, coluna = 0; linha<3; linha++){
		for (coluna = 0; coluna<3; coluna++){
			matrizResultante[linha][coluna] = (matriz[linha][coluna] * somaDasLinhas[linha]);
		}
	}
	
	printf("\nMatriz Resultante: ");
	for (linha = 0, coluna = 0; linha<3; linha++){
		printf("\n");
		for (coluna = 0; coluna<3; coluna++){
			printf("%d  ", matrizResultante[linha][coluna]);
		}
	}
}
