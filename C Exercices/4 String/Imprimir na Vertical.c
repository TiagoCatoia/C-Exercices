#include <stdio.h>
#include <locale.h>
#include <string.h>
/*  Lista de Exerc�cios � Algoritmos e Programa��o II

EXERCICIO 9 da lista
Fa�a um programa que solicite o nome do usu�rio e imprima-o na vertical e em 
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
