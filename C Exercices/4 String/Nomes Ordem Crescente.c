#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  EXERCICIO PARA TREINAR
Faça um programa que leia 10 nomes, ordene-os de
forma crescente de tamanho.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	char nomes[5][50];
	int i, t, posicaoMenor, tamanhoMenor;
	
	printf("Digite 10 nomes para ordena-los em ordem crescente: \n");
	
	for(i=0; i<10; i++){
		gets(nomes[i]);
	}
	
	printf("\nNomes em ordem crescente: ");
	for(t=0; t<10; t++){
		posicaoMenor = -1;
		tamanhoMenor = -1;
		
		for(i=0; i<10; i++){
			if ((strlen(nomes[i]) < tamanhoMenor || tamanhoMenor == -1) && nomes[i][0] != '\0'){
				posicaoMenor = i;
				tamanhoMenor = strlen(nomes[i]);
			}
		}
		printf("\n%s", nomes[posicaoMenor]);
		nomes[posicaoMenor][0] = '\0';
	}
}
