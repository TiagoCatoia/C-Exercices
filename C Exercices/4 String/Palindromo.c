#include <stdio.h>
#include <locale.h>
#include <string.h>

#define True 1
#define False 0
/*  EXERCICIO 1
Fa�a um programa que receba uma palavra e
verifique se ela � um pal�ndromo, ou seja, se escrita
do fim para o come�o � igual � palavra escrita do
come�o para o fim. Exemplo: RENNER, ANA,
MIRIM, OVO, etc.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	char palavra[50], palavraInvertida[50];
	int tamanhoPalavra, i, t, palindromo, resultado;
	
	printf("Digite uma palavra para verificar se � um pal�ndromo: ");
	gets(palavra);
	strlwr(palavra);
	
	tamanhoPalavra = strlen(palavra); 
	for(i=0, t=1; i<tamanhoPalavra; i++, t++){  // inverte a string ( pode-se usar 'strrev(str1)' que inverte a string e armazenada em str1, ficaria 'palavraInvertida = strrev(palavra);' )
		palavraInvertida[i] = palavra[tamanhoPalavra-t];
	}
	printf("Para ser um pal�ndromo a palavra:'%s' deve ser igual o inverso:'%s'", palavra, palavraInvertida);
	
	resultado = strcmpi(palavra, palavraInvertida);  // stricmp() ou strcmpi() compara as strings (consideram letras mai�sculas e min�sculas iguais) e retornam 0 se forem iguais.
	if (resultado == 0){
		palindromo = True;
	}
	else{
		palindromo = False;
	}
		
	if (palindromo == 1){
		printf("\nLogo, '%s' forma um pal�ndromo!", palavra);
	}
	else{
		printf("\nLogo, '%s' n�o forma um pal�ndromo!", palavra);
	}
}

