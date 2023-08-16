#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCICIO 2
Faça um programa que leia um nome e imprima as
4 primeiras letras.
*/

main(){
	setlocale(LC_ALL, "pt-BR");
	char nome[50];
	int i;
	
	printf("Digite um nome para imprimir as 4 primeiras letras: ");
	gets(nome);
	
	if (strlen(nome) < 4){
		printf("\nEste nome possui menos de 4 letras, tente com outro!");
	}
	else{
		for(i=0; i<4; i++){
		printf("%c", nome[i]);
		}	
	}
}
