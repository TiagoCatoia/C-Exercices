#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCICIO 6
Fa�a um programa que leia o nome e o sobrenome
de uma pessoa separadamente. O programa deve
juntar as duas strings em uma s� e escrever na
tela: a nova string, o seu n�mero de caracteres, a
sua primeira e a �ltima letra.
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
	
	printf("Jun��o das strings: %s", nome);
	printf("\nN�mero de caracteres: %d", strlen(nome));
	printf("\nPrimeira letra: %c", nome[0]);
	printf("\n�ltima letra: %c", nome[strlen(nome)-1]);
}
