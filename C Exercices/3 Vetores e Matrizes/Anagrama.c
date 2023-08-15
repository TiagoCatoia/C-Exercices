#include <stdio.h>
#include <locale.h>
#include <string.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 10 da lista
Um anagrama é uma palavra que é feita a partir da transposição das letras de outra 
palavra ou frase. Por exemplo, “Iracema” é um anagrama para “America”. 
Escreva um programa que decida se uma string é um anagrama de outra string, 
ignorando os espaços em branco. O programa deve considerar maiúsculas e 
minúsculas como sendo caracteres iguais, ou seja, “a” = “A”
*/
#define True 1
#define False 0

main(){
	setlocale(LC_ALL, "Portuguese");
	int anagrama = True, i, t, posicaoPrimeiraFrase[100], posicaoSegundaFrase[100];
	char primeiraFrase[100], segundaFrase[100], letrasValores[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("Digite duas palavras ou frases para verificar se são anagramas");
	printf("\nPrimeira frase/palavra: ");
	gets(primeiraFrase);
	printf("Segunda frase/palavra: ");
	gets(segundaFrase);
	
	if (strlen(primeiraFrase) != strlen(segundaFrase)){
		anagrama = False;
	}
	else{
		// igualando os valores de maiusculo e minusculo transformando em números
		for (i = 0; i < strlen(primeiraFrase); i++){
			// letrasValores possui 26 índices minusculos + 26 maiusculos, somando 52 onde o a posição de um + 26 equivale ao maiusculos ex: a (indice: 0, + 26 = A), z (indice: 25, + 26 = Z)
			for (t = 0; t < 26; t++){
				if (primeiraFrase[i] == letrasValores[t] || primeiraFrase[i] == letrasValores[t+26]){
					posicaoPrimeiraFrase[i] = t; // adiciona a posicao do valor da letra encontrada (sendo o mesmo para maiscula ou minuscula)
				}
				else if (primeiraFrase[i] == ' '){
					posicaoPrimeiraFrase[i] = -1;
				}
			}
			for (t = 0; t < 26; t++){
				if (segundaFrase[i] == letrasValores[t] || segundaFrase[i] == letrasValores[t+26]){
					posicaoSegundaFrase[i] = t;
				}
			}
		}
		for (i = 0; i < strlen(primeiraFrase); i++){
			for (t = 0; t < strlen(segundaFrase); t++){
				if (posicaoPrimeiraFrase[i] == posicaoSegundaFrase[t]){
					posicaoPrimeiraFrase[i] = -1; // substituo o número equivalente a letra por -1 se em algum momento achar uma letra equivalente da primeira frase na segunda
					break;
				}
			}
		}
		for (i = 0; i < strlen(primeiraFrase); i++){ // loop que verifica se todos os números foram substituidos por -1, se sim é um anagrama
			if (posicaoPrimeiraFrase[i] != -1){
				anagrama = False;
			}
		}
	}
	if (anagrama == False){
		printf("\nNão formam um anagrama!");
		}
	else{
		printf("\nFormam um anagrama!");
	}
}
