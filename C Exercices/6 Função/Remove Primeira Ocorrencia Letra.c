#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*  EXERC�CIO 3
Fa�a uma fun��o que receba por par�metro uma
string S e um caractere C, lidos no programa
principal e remove a primeira ocorr�ncia de C em S
(se existir). A fun��o dever� alterar a pr�pria string,
que ser� impressa depois pelo programa principal.
Crie um programa principal que use a fun��o criada.
*/

#define True 1
#define False 0

void removePrimeiraOcorrencia(char S[], char C, int *removeu, int i, int y) {
	for (i=0; i<strlen(S) && *removeu == False; i++) {
		if (C == S[i]){
			for (y=0; y<strlen(S); y++,i++) {
				S[i] = S[i+1];
			}
			*removeu = True;
		}
	}
}

main() {
	setlocale(LC_ALL, "Portuguese");
	char S[50], C;
	int removeu = False, i=0, y=0;
	
	printf("Digite uma string: ");
	gets(S);
	strlwr(S);
	
	printf("\nDigite uma letra para remover a primeira ocorr�ncia sua na string: ");
	scanf(" %c", &C);
	C = tolower(C);
	
	printf("\nString sem remover a letra: %s | Letra que deve remover: %c", S, C);
	
	removePrimeiraOcorrencia(S, C, &removeu, i, y);
	
	if (removeu == True) {
		printf("\nString com letra removida: %s | Letra removida na 1� ocorr�ncia: %c", S, C);
	}
	else {
		printf("\nString inicial: %s | '%c' n�o aparece na string '%s'", S, C, S);
	}
}
