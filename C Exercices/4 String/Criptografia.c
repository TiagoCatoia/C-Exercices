#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 11 da lista
Faça um programa que receba um texto (string) como entrada e criptografa-o de 
acordo com a tabela a seguir. O programa deverá imprimir o texto criptografado.
Tabela de criptografia:
	Representação:
	-------------------------
	|Vogais @				 |
	-------------------------
	|Consoantes #			 |
	-------------------------
	|Caracteres(@,#,$,%,etc) |
	|especiais %			 |
	-------------------------
	|Dígitos 0-9 $			 |
	-------------------------
	|Espaço *				 |
	-------------------------
Exemplo:
Texto de entrada: Aprendendo a programar em C na disciplina de APR2
Saída: 
@##@##@##@*@*##@##@#@#*@#*#*#@*#@##@##@#@*#@*@##$


 EXPLICAÇÃO Array de Ponteiros para Caracteres (Strings)
char *vogais = "aeiou";:
Nesse caso, você está criando um ponteiro para caracteres (char *) chamado vogais e inicializando-o com a string "aeiou".
Isso significa que vogais apontará para o primeiro caractere da string (ou seja, 'a').
A string "aeiou" é armazenada como uma sequência de caracteres na memória, terminada pelo caractere nulo ('\0').
O ponteiro vogais aponta para o primeiro caractere dessa sequência.

char *vogais[] = {"a", "e", "i", "o", "u"};:
Neste caso, você está criando um array de ponteiros para caracteres (char *) chamado vogais e inicializando-o com um conjunto de strings.
Cada elemento do array é um ponteiro que aponta para a primeira letra de cada uma das strings "a", "e", "i", "o" e "u".
Assim, você tem um array que armazena vários ponteiros para strings diferentes.
*/

#define True 1
#define False 0
main(){
	setlocale(LC_ALL, "Portuguese");
	char texto[100];
	int tamanhoTexto, i = 0, t = 0, traduzido = False;
	// Criptografias
    char *vogais = "aeiou"; 
    char *consoantes = "bcdfghjklmnpqrstvwxyz";
    char *caracteresEspeciais = "!@#$%&*()-+=[]{};:,./<>";
    char *digitos = "0123456789";
    char *espaco = " ";
	
	printf("Digite um texto para criptografar: ");
	gets(texto);
	
	tamanhoTexto = strlen(texto);
	for (i = 0; i < tamanhoTexto; i++){
        texto[i] = tolower(texto[i]);
	}

	for (i = 0; i < tamanhoTexto; i++){
		traduzido = False;
		for(t = 0; vogais[t] != '\0' && traduzido == False; t++){
			if (texto[i] == vogais[t]){
				printf("@");
				traduzido = True;
			}
		}
		for(t = 0; consoantes[t] != '\0' && traduzido == False; t++){
			if (texto[i] == consoantes[t]){
				printf("#");
				traduzido = True;
			}	
		}
		/* comparação texto[i] == caracteresEspeciais[t] não funcionará corretamente para caracteres especiais,
		porque o operador == compara caracteres individualmente e caracteres especiais podem ser representados por mais de um byte.
		*/
		for (t = 0; caracteresEspeciais[t] != '\0' && traduzido == False; t++) { 
		    if (texto[i] == caracteresEspeciais[t]) {
		        printf("%");
		        traduzido = True;
		    }
		}
		for(t = 0; digitos[t] != '\0' && traduzido == False; t++){
			if (texto[i] == digitos[t]){
				printf("$");
				traduzido = True;
			}
		}
		for(t = 0; espaco[t] != '\0' && traduzido == False; t++){
			if (texto[i] == espaco[t]){
				printf("*");
				traduzido = True;
			}
		}
	}
}
