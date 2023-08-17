#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCICIO 7
Faça um programa que leia um nome completo e o
imprima de duas formas: com todas as letras em
minúsculas e com todas as letras em maiúsculas
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	
	printf("Digite seu nome completo: ");
	gets(nome);
	
	printf("\nMaiúsculo: %s", strupr(nome));
	printf("\nMinúsculo: %s", strlwr(nome));
}
