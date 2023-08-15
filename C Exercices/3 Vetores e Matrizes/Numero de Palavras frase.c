#include <stdio.h>
#include <locale.h>
#include <string.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 8 da lista
Faça um programa que recebe uma frase e retorna o número de palavras que a 
frase contém.
*/
#define True 1
#define False 0
main(){
	setlocale(LC_ALL, "Portuguese");
	char frase[100];
	int i = 0, t = 0, contadorPalavras = 0, tamanhoFrase, achouEspaco = False;
	
	printf("Digite um frase para ver o número de palavras: ");
	gets(frase);  // o ideal seria usar o fgets, para evitar que o buffer estoure: char *fgets(char *str, int size, FILE *stream);
	
	tamanhoFrase = strlen(frase);
	
	while (frase[0] == ' '){
		for (i = 0; i < tamanhoFrase; i++){
			frase[i] = frase[i + 1];  // quando chega na ultima letra ex:" Amor" r passa a ser "\0" que faz com que encerre a string naquele ponto
		}
		tamanhoFrase --;
	}
	
	while (frase[tamanhoFrase - 1] == ' '){
		frase[tamanhoFrase - 1] = '\0'; // o espaço vira um caractere nulo, encerrando a string naquele ponto
		tamanhoFrase --;
	}
	
	for (i = 0; i < tamanhoFrase; i++){
		if (frase[i] == ' '){
			achouEspaco = True;
		}
		else if (achouEspaco == True){
			contadorPalavras ++;
			achouEspaco = False;
		}
	}
	
	if (frase[0] == '\0'){
		printf("\nVocê digitou um espaço vazio, tente digitar uma frase!");
	}
	else{
		contadorPalavras ++; // Adicionar 1 ao contador para contar a primeira palavra
		printf("\nO número de palavras na frase é %d", contadorPalavras);
	}
}
