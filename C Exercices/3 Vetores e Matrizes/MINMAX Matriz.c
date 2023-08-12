#include <stdio.h>
#include <locale.h>
/*  Lista de Exerc�cios � Algoritmos e Programa��o II

EXERCICIO 4 da lista
Na teoria dos sistemas, o elemento MINMAX de uma matriz � o maior elemento 
da linha em que se encontra o menor elemento da matriz. Elabore um programa 
que carregue uma matriz 4 x 5 com n�meros reais, identifique e mostre o 
MINMAX e a sua posi��o na matriz.

*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int contadorLinha = 1, contadorColuna = 1, linha = 0, coluna = 0, matriz[4][5], menorElemento = matriz[0][0], linhaMenorElemento = 0, colunaMaiorElemento = 0;
	
	printf("Digite os valores de uma matriz 4 x 5");
	for (linha = 0, contadorLinha = 1 ; linha<4 ; linha++, contadorLinha++){
		printf("\n%d� Linha\n", contadorLinha);
		for (coluna = 0, contadorColuna = 1 ; coluna<5 ; coluna++, contadorColuna++){
			printf("%d� Coluna: ", contadorColuna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	// o menorElemento foi atribu�do acima sendo o primeiro elemento da matriz(4x5) da posi��o 0x0
	for (linha = 0; linha<4; linha++){
		for (coluna = 0; coluna<5; coluna++){
			if (matriz[linha][coluna] < menorElemento){    // verifica cada elemento da matriz e se um deles for menor que o primeiro ele se torna o menor e se repete achando o menor elemento da matriz
				menorElemento = matriz[linha][coluna];
				linhaMenorElemento = linha;  // armazeno a linha do menor elemento
			} // PROBLEMA: se ouver 2 n�meros iguais que s�o os menores elementos da matriz, neste caso como em (if (matriz[linha][coluna] < menorElemento)) o < n�o possui = (ex: <=) estou considerando o menor como o 1� que apararece 
		}
	}
	// percorre a linha do menorElemento buscando o maior elemento desta linha
	int maiorElemento = matriz[linhaMenorElemento][0]; // atribui o maiorElemento sendo o primeiro elemento da linha do menor elemento
	for (linha = linhaMenorElemento, coluna = 0; coluna<5; coluna++){
		if (matriz[linha][coluna] > maiorElemento){
			maiorElemento = matriz[linha][coluna];
			colunaMaiorElemento = coluna;
		}
	}
	printf("\nO MINMAX desta matriz � %d e sua posi��o � %d x %d", maiorElemento, linhaMenorElemento + 1, colunaMaiorElemento + 1); // foi necess�rio somar 1 na linha e coluna, pois em C o �ndices das matrizes come�am em 0
}
