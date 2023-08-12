#include <stdio.h>
#include <locale.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 7 da lista
Escrever um programa que preencha 2 matrizes (a e b) de 3 linhas x 4 colunas com 
números aleatórios e não repetidos (entre 0 e 100). Em seguida, verifique a 
existência de números iguais nas duas matrizes, imprimindo-os. No exemplo a 
seguir apenas o número 4 aparece em ambas matrizes.
Matriz 1
2 4 17 8
5 10 3 19
12 13 6 0

Matriz 2
12 14 27 18
75 4 53 11
52 93 61 30
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int linha = 0, coluna = 0, matriz[3][3], matrizResultante[3][3], somaElementosLinha = 0, somaDasLinhas[3], contadorLinha = 1, contadorColuna = 1;
	
	printf("Digite os elementos de uma matriz 3 x 3:");
	for (linha=0; linha<3; linha++, contadorLinha++){
		printf("\n%dº Linha\n", contadorLinha);
		for (coluna=0, contadorColuna=1; coluna<3 ; coluna++, contadorColuna++){
			printf("%dº Coluna: ", contadorColuna);
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
