#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 2 da lista
Faça um programa que simule um jogo da loto. O computador deve gerar 5 
números aleatoriamente entre 50 possíveis (0 a 49), armazenando as dezenas 
sorteadas em um vetor (dez_sort) de 5 posições. Em seguida, o usuário deverá ler 
um vetor com 10 posições, representando a aposta (conforme o exemplo abaixo). 
O programa deve, então, verificar e imprimir uma mensagem mostrando quantos 
números o usuário acertou. De acordo com o exemplo abaixo o usuário acertou 4 
dezenas.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL)); // Inicialize a semente do gerador de números aleatórios com o valor do tempo atual (REINICIA OS VALORES SORTEADOS)
	int dez_sort[5], aposta[10], maximo = 49, i = 0, num_sort, contador_dez = 0, acertos = 0 , y =0;
	
	while (i < 5){
		num_sort = rand() % maximo;
		if (num_sort >= 10){
			dez_sort[i] = num_sort;
			contador_dez ++;
		}
		i ++;
	}
	printf("Digite suas apostas (10 números entre 0 e 49)\n");
	i = 0;
	while (i < 10){
		printf("%dº  Aposta: ", i+1);
		scanf("%d", &aposta[i]);
		i ++;
	}
	printf("\nNúmeros sorteados: ");
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
		printf("\nVocê acertou %d dos números sorteados", acertos);
	}
	else{
		printf("\nVocê não acertou nenhum dos números sorteados");
	}
}
