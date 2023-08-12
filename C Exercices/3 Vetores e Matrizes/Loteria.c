#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*  Lista de Exerc�cios � Algoritmos e Programa��o II

EXERCICIO 2 da lista
Fa�a um programa que simule um jogo da loto. O computador deve gerar 5 
n�meros aleatoriamente entre 50 poss�veis (0 a 49), armazenando as dezenas 
sorteadas em um vetor (dez_sort) de 5 posi��es. Em seguida, o usu�rio dever� ler 
um vetor com 10 posi��es, representando a aposta (conforme o exemplo abaixo). 
O programa deve, ent�o, verificar e imprimir uma mensagem mostrando quantos 
n�meros o usu�rio acertou. De acordo com o exemplo abaixo o usu�rio acertou 4 
dezenas.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL)); // Inicialize a semente do gerador de n�meros aleat�rios com o valor do tempo atual (REINICIA OS VALORES SORTEADOS)
	int dez_sort[5], aposta[10], maximo = 49, i = 0, num_sort, contador_dez = 0, acertos = 0 , y =0;
	
	while (i < 5){
		num_sort = rand() % maximo;
		if (num_sort >= 10){
			dez_sort[i] = num_sort;
			contador_dez ++;
		}
		i ++;
	}
	printf("Digite suas apostas (10 n�meros entre 0 e 49)\n");
	i = 0;
	while (i < 10){
		printf("%d�  Aposta: ", i+1);
		scanf("%d", &aposta[i]);
		i ++;
	}
	printf("\nN�meros sorteados: ");
	i = 0;
	while (i < 5){
		printf("%d | ", dez_sort[i]);
		i ++;
	}
	printf("\nSua aposta: ");
	i = 0;
	while (i < 10){
		printf("%d | ", aposta[i]);
		i ++;
	}
	i = 0;
	while (i < 10){
		y = 0;
		while (y < contador_dez){
			if (aposta[i] == dez_sort[y]){
				acertos ++;
				break; //sai do loop interno quando encontrar um acerto
			}
			y ++;
		}
		i ++;
	}
	if (acertos != 0){
		printf("\nVoc� acertou %d dos n�meros sorteados", acertos);
	}
	else{
		printf("\nVoc� n�o acertou nenhum dos n�meros sorteados");
	}
}
