#include <stdio.h>
#include <locale.h>
#include <string.h>

#define True 1
#define False 0

/*
Um anagrama é uma palavra que é feita a partir da
transposição das letras de outra palavra ou frase. Por
exemplo, “Iracema” é um anagrama para “America”.
Escreva uma função que receba duas strings e verifica se
a primeira string é um anagrama da segunda, ignorando
os espaços em branco e acentuação. A função deverá
retornar 1, caso seja um anagrama e 0, caso contrário. A
mensagem informando se as strings formam um
anagrama ou não deverá ser impressa pelo programa
principal.
OBS: ignore maiúsculas e minúsculas
*/

int verificaAnagrama(char primeiraPalavra[], char segundaPalavra[], int i, int y, int t, int removeu, int tamanho, char acentuacao[], char semAcentuacao[]) {
	if (strlen(primeiraPalavra) != strlen(segundaPalavra)) {
		return 0;
	}
	else {
		// remove a acentução
		for (i = 0; i < strlen(primeiraPalavra); i++) {
            for (y = 0; y < strlen(acentuacao); y++) {
                if (primeiraPalavra[i] == acentuacao[y]) {
                    printf("%c | %c ", primeiraPalavra[i], acentuacao[y]);
                    primeiraPalavra[i] = semAcentuacao[y];
                }
                if (segundaPalavra[i] == acentuacao[y]) {
                    segundaPalavra[i] = semAcentuacao[y];
                    printf("%c | %c ", segundaPalavra[i], acentuacao[y]);
                }
            }
        }
		
		// verifica se formam um anagrama
		int anagrama = 0;
		for (i=0; i<strlen(primeiraPalavra); i++) {
			for (y=0, removeu = False; y<strlen(segundaPalavra) && removeu == False; y++) {
				if (primeiraPalavra[i] == segundaPalavra[y]) {
					printf("\nLetra1: %c  |  Letra2: %c ", primeiraPalavra[i], segundaPalavra[y]);
					if (i == tamanho - 1){ // caso chegar na última letra da primeiraPalavra
						if (primeiraPalavra[i] == segundaPalavra[0]) {
							anagrama = 1;
						}
						else {
							anagrama = 0;
							printf("\n| %c | %d", primeiraPalavra[i], y);
						}
					}
					else {
						anagrama = 1;
						for (t=y; t<strlen(segundaPalavra); t++) {
							segundaPalavra[t] = segundaPalavra[t+1];
							removeu = True;
						}
					}
				}
				else {
					anagrama = 0;
				}
			}
			if (anagrama == 0 ) { // retorna 0 se não encontrar a letra de índice i da primeiraPalavra na segundaPalavra
			printf("'%c '", primeiraPalavra[i]);
				return 0;
			}
		}
		return anagrama; // retorna 1 se formar uma anagrama ou 0 se não formar 
	}
}

main() {
	setlocale(LC_ALL, "Portuguese");
	char primeiraPalavra[50], segundaPalavra[50];
	int i, y, t, removeu = False,resultado;
	char acentuacao[] = "áàâãéèêíìóòôõúùçÁÀÂÃÉÈÊÍÌÓÒÔÕÚÙÇ", semAcentuacao[] = "aaaeeiiooouuccAAAEEIIOOOUUC";
	
	printf("Digite duas palavras para verificar se formam um anagrama\n");
	
	printf("\nEntre com a primeira palavra: ");
	gets(primeiraPalavra);
	strlwr(primeiraPalavra);
	
	printf("\nEntre com a segunda palavra: ");
	gets(segundaPalavra);
	strlwr(segundaPalavra);
	int tamanho = strlen(segundaPalavra);
	
	resultado = verificaAnagrama(primeiraPalavra, segundaPalavra, i, y, t, removeu, tamanho, acentuacao, semAcentuacao);
	
	if (resultado == 0) {
		printf("\nNão formam um anagrama!");
	}
	else {
		printf("\nFormam um anagrama!");
	}
}

