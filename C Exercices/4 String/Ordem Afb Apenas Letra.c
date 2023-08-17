#include <stdio.h>
#include <locale.h>
#include <string.h>

#define True 1
#define False 0
/*  EXERCICIO 4
Altere o exercicio 2) para imprimir todos os nomes
que contenham uma letra qualquer fornecida pelo
usuário.
*/
int main() {
    setlocale(LC_ALL, "Portuguese");
    char nomes[10][50], auxiliar[50], letra;
    int i, t, w, resultado, possuiLetra;

    printf("Digite 10 nomes para organizá-los em ordem alfabética:\n");
    for(i = 0; i < 10; i++){
        gets(nomes[i]);
    }

	printf("Escolha uma letra, vou apenas mostrar os nomes que tenham a letra: ");
	scanf(" %c", &letra);
	
	// utilizando Bubble Sort
    for(i = 0; i < 10; i++){
    	for(t = 0; t < 9; t++){
	        resultado = strcmp(nomes[t], nomes[t + 1]);
	        if (resultado > 0) {
	            strcpy(auxiliar, nomes[t]);
	            strcpy(nomes[t], nomes[t + 1]);
	            strcpy(nomes[t + 1], auxiliar);
       	 	}
    	}
	}

    
    for(i = 0; i < 10; i++){
    	possuiLetra = False;
    	for (t = 0; t < strlen(nomes[i]); t++){
    		if (nomes[i][t] == letra){
    			possuiLetra = True;
			}
		}
		if (possuiLetra == True){
    	printf("%s\n", nomes[i]);
		}
	}
}

