#include <stdio.h>
#include <locale.h> // ex 3 bes_apr2 alfabetica

/*  EXERCICIO 5
Faça um programa que leia um nome e escreva o
numero de letras que ele possui (sem usa strlen).
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	int i, contadorLetras;
	
	printf("Digite um nome para ver qual o número de letras: ");
	gets(nome);
	for (i = 0, contadorLetras=0; nome[i] != '\0'; i++){
		if (nome[i] != ' ' && nome[i] != '\0'){
			contadorLetras ++;
		}
	}
	
	printf("O número de letras em '%s' é %d", nome, contadorLetras);
}
