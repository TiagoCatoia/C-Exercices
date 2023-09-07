#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*  EXERCÍCIO 3
Faça uma função que receba por parâmetro uma
string S e um caractere C, lidos no programa
principal e remove a primeira ocorrência de C em S
(se existir). A função deverá alterar a própria string,
que será impressa depois pelo programa principal.
Crie um programa principal que use a função criada.
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
	
	printf("\nDigite uma letra para remover a primeira ocorrência sua na string: ");
	scanf(" %c", &C);
	C = tolower(C);
	
	printf("\nString sem remover a letra: %s | Letra que deve remover: %c", S, C);
	
	removePrimeiraOcorrencia(S, C, &removeu, i, y);
	
	if (removeu == True) {
		printf("\nString com letra removida: %s | Letra removida na 1º ocorrência: %c", S, C);
	}
	else {
		printf("\nString inicial: %s | '%c' não aparece na string '%s'", S, C, S);
	}
}
