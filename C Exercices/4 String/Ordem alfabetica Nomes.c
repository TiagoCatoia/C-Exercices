#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCICIO 3
Fa�a um programa que leia 10 nomes, ordene-os de
forma crescente alfabeticamente e mostre-os na tela.
*/
int main() {
    setlocale(LC_ALL, "Portuguese");
    char nomes[10][50], auxiliar[50];
    int i, t, w, resultado;

    printf("Digite 10 nomes para organiz�-los em ordem alfab�tica:\n");
    for(i = 0; i < 10; i++){
        gets(nomes[i]);
    }

	// utilizando Bubble Sort
    for(i = 0; i < 10; i++) {
    for(t = 0; t < 9; t++) { // Corrigido para ir at� 9 - 1
        resultado = strcmp(nomes[t], nomes[t + 1]);
        if (resultado > 0) {
            strcpy(auxiliar, nomes[t]);
            strcpy(nomes[t], nomes[t + 1]);
            strcpy(nomes[t + 1], auxiliar);
        }
    }
}

    printf("\n")
    for(i = 0; i < 10; i++){
        printf("%s\n", nomes[i]);
    }
}

