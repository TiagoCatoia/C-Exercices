#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCICIO 6
Faça um programa que leia o nome e o sobrenome
de uma pessoa separadamente. O programa deve
juntar as duas strings em uma só e escrever na
tela: a nova string, o seu número de caracteres, a
sua primeira e a última letra.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50], sobrenome[50], nomeJunto;
	int i;
	
	printf("Digite seu primeiro nome: ");
	gets(nome);
	printf("Digite seu sobrenome: ");
	gets(sobrenome);
	
	strcat(nome,sobrenome);
	
	printf("Junção das strings: %s", nome);
	printf("\nNúmero de caracteres: %d", strlen(nome));
	printf("\nPrimeira letra: %c", nome[0]);
	printf("\nÚltima letra: %c", nome[strlen(nome)-1]);
}
