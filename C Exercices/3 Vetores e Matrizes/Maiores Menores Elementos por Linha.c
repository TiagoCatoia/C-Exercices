#include <stdio.h>
#include <locale.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 5 da lista
Faça um programa que preencha uma matriz 7 x 7 de inteiros e crie dois vetores 
com 7 posições cada que contenham, respectivamente, o maior elemento de cada 
linha e o menor elemento de cada linha.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int linha = 0, coluna = 0, matriz[7][7], maioresElementosLinha[7], menoresElementosLinha[7], contadorLinha = 1, contadorColuna = 1, maiorElemento, menorElemento;
	
	for (linha=0; linha<7; linha++, contadorLinha++){
		printf("\n%dº Linha\n", contadorLinha);
		for (coluna=0, contadorColuna=1; coluna<7 ; coluna++, contadorColuna++){
			printf("%dº Coluna: ", contadorColuna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	for (linha = 0, coluna = 0; linha<7; linha++){
		coluna = 0;
		maiorElemento = matriz[linha][coluna]; // atribui o maiorElemento sendo o 1º de cada linha
		menorElemento = matriz[linha][coluna]; // atribui o menorElemento sendo o 1º de cada linha
		for (coluna = 0; coluna<7; coluna++){
			if (matriz[linha][coluna] > maiorElemento){
				maiorElemento = matriz[linha][coluna];
			}
			if (matriz[linha][coluna] < menorElemento){
				menorElemento = matriz[linha][coluna];
			}
		}
		maioresElementosLinha[linha] = maiorElemento;
		menoresElementosLinha[linha] = menorElemento;
	}
	
	for (contadorLinha=1, linha = 0; linha<7; contadorLinha++, linha++){
		printf("\nMaior elemento da %dº linha: %d", contadorLinha, maioresElementosLinha[linha]);
		printf("\nMenor elemento da %dº linha: %d", contadorLinha, menoresElementosLinha[linha]);
	}
}
