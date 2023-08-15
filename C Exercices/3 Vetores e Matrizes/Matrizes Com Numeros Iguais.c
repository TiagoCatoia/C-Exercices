#include <stdio.h>
#include <locale.h>
#include <time.h>
/*  Lista de Exerc�cios � Algoritmos e Programa��o II

EXERCICIO 7 da lista
Escrever um programa que preencha 2 matrizes (a e b) de 3 linhas x 4 colunas com 
n�meros aleat�rios e n�o repetidos (entre 0 e 100). Em seguida, verifique a 
exist�ncia de n�meros iguais nas duas matrizes, imprimindo-os. No exemplo a 
seguir apenas o n�mero 4 aparece em ambas matrizes.
Matriz 1
2 4 17 8
5 10 3 19
12 13 6 0

Matriz 2
12 14 27 18
75 4 53 11
52 93 61 30
*/

#define True 1
#define False 0

main(){
	setlocale(LC_ALL, "Portuguese");
	int linha = 0, coluna = 0, a[3][4], b[3][4], contadorLinha = 1, contadorColuna = 1, numeroSorteado, maximo = 101;
	int contadorNumerosJaSorteadosA = 0, contadorNumerosJaSorteadosB = 0;
	int contadorVetor = 0, numerosJaSorteadosDeA[12], numerosJaSorteadosDeB[12];
	
	srand(time(NULL)); // Inicialize a semente do gerador de n�meros aleat�rios com o valor do tempo atual (REINICIA OS VALORES SORTEADOS)
	
    printf("Gerando a primeira matriz...\n");
    for (linha = 0; linha < 3; linha++, contadorLinha++) {
        printf("%d� Linha\n", contadorLinha);
        for (coluna = 0, contadorColuna = 1; coluna < 4; coluna++, contadorColuna++) {
            printf("%d� Coluna: ", contadorColuna);
            numeroSorteado = rand() % maximo;
            for (contadorVetor = 0; contadorVetor < contadorNumerosJaSorteadosA; contadorVetor++) {
                if (numeroSorteado == numerosJaSorteadosDeA[contadorVetor]) {
                    numeroSorteado = rand() % maximo;
                    contadorVetor = 0;
                }
            }
            printf("%d\n", numeroSorteado);
            a[linha][coluna] = numeroSorteado;
            numerosJaSorteadosDeA[contadorNumerosJaSorteadosA] = numeroSorteado;
            contadorNumerosJaSorteadosA++;
        }
        printf("\n");
    }
	
	printf("Gerando a segunda matriz...\n");
	for (contadorLinha = 1, linha=0; linha<3; linha++, contadorLinha++){
		printf("%d� Linha\n", contadorLinha);
		for (coluna=0, contadorColuna=1; coluna<4 ; coluna++, contadorColuna++){
			printf("%d� Coluna: ", contadorColuna);
			numeroSorteado = rand() % maximo;
			for (contadorVetor = 0; contadorVetor < contadorNumerosJaSorteadosB; contadorVetor++){  // define o tamanho do vetor sendo a quantia de n�meros j� adicionados nele (max 12)
				if (numeroSorteado == numerosJaSorteadosDeB[contadorVetor]){
					numeroSorteado = rand() % maximo; // sorteira um novo n�mero, j� que o outro j� foi sorteado
					contadorVetor = 0; // faz com que o loop se reicinie depois de sortear um novo n�mero, para verificar se esse novo n�mero se repete
				}
			}
			printf("%d\n", numeroSorteado);
			b[linha][coluna] = numeroSorteado;
			numerosJaSorteadosDeB[contadorNumerosJaSorteadosB] = numeroSorteado;
			contadorNumerosJaSorteadosB ++;
		}
		printf("\n");
	}
	
	int contadorVetorA = 0, contadorVetorB = 0, numeroIgual = False;
	printf("\nN�meros existentes nas duas matrizes: ");
	for (contadorVetorA = 0; contadorVetorA < 12; contadorVetorA++){ // o tamanho 12 equivale a quantidade de n�meros na matriz a/b (ou seja, o tamanho dos vetores), assim preciso verificar se cada elemento do vetor A existe no vetor B
		for(contadorVetorB = 0; contadorVetorB < 12; contadorVetorB++){
			if (numerosJaSorteadosDeA[contadorVetorA] == numerosJaSorteadosDeB[contadorVetorB]){
				printf("%d | ", numerosJaSorteadosDeA[contadorVetorA]);
				numeroIgual = True;
			}
		}
	}
	if (numeroIgual == False){
		printf("\nAs matrizes n�o possuem n�meros iguais!");
	}
}
