#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCICIO 7
Fa�a um programa que leia um nome completo e o
imprima de duas formas: com todas as letras em
min�sculas e com todas as letras em mai�sculas
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	
	printf("Digite seu nome completo: ");
	gets(nome);
	
	printf("\nMai�sculo: %s", strupr(nome));
	printf("\nMin�sculo: %s", strlwr(nome));
}
