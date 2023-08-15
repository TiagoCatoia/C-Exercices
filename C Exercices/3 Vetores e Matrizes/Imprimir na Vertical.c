#include <stdio.h>
#include <locale.h>
#include <string.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 9 da lista
Faça um programa que solicite o nome do usuário e imprima-o na vertical e em 
formato de escada. Ex.:
	M
	Ma
	Mar
	Mari
	Maria
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100], tamanhoNome;
	int i = 0, t = 1, count = 0;
	
	printf("Digite seu primeiro nome: ");
	gets(nome);
	
	tamanhoNome = strlen(nome);
	for(count = 0; count < tamanhoNome; count++){
		for(i = 0; i <= count; i ++){
			printf("%c", nome[i]);
		}
		printf("\n");
	}
}
