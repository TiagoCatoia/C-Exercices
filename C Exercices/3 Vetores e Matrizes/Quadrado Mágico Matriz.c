#include <stdio.h>
#include <locale.h>

#define True 1
#define False 0
/*  Lista de Exerc�cios � Algoritmos e Programa��o II

EXERCICIO 3 da lista
Crie um programa que preencha uma matriz 3x3 de n�meros inteiros e verifique 
se essa matriz forma um quadrado m�gico. Um quadrado m�gico � formado 
quando a soma dos elementos de cada linha � igual:
- � soma dos elementos de cada coluna da matriz;
- � soma dos elementos da diagonal principal;
- � soma dos elementos da diagonal secund�ria;
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int contadorLinha = 1, contadorColuna = 1, linha = 0, coluna = 0, matriz[3][3], soma = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, valorEsperado = 0, quadradoMagico = True;
	
	printf("Digite os valores de uma matriz 3 x 3");
	for (linha = 0, contadorLinha = 1 ; linha<3 ; linha++, contadorLinha++){
		printf("\n%d� Linha\n", contadorLinha);
		for (coluna = 0, contadorColuna = 1 ; coluna<3 ; coluna++, contadorColuna++){
			printf("%d� Coluna: ", contadorColuna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	// verifica se cada linha possui a mesma soma e armazena o valorEsperado
	for (valorEsperado = 0, soma = 0 ,linha = 0; linha<3 && quadradoMagico == True; linha++){
		if (soma != valorEsperado){
			quadradoMagico = False;
		}
		for (soma = 0 , coluna = 0 ; coluna<3 && quadradoMagico == True; coluna++){
			soma += matriz[linha][coluna];
			}
			if (valorEsperado == 0){
				valorEsperado = soma;
		}
	}
	if (quadradoMagico == True){
		printf("A soma das linhas s�o iguais!");
	}
	else{
		printf("A soma das linhas n�o s�o iguais!!");
	}
	
	// verifica se a soma de cada coluna � igual ao valorEsperado
	for(coluna = 0; coluna<3 && quadradoMagico == True; coluna++){
		if (soma != valorEsperado){
			quadradoMagico = False;
		}
		for(soma = 0, linha = 0 ; linha<3 && quadradoMagico == True; linha++){
			soma += matriz[linha][coluna];
		}
	}
	if (quadradoMagico == True){
		printf("\nA soma das colunas s�o iguais!");
	}
	else{
		printf("\nA soma das colunas n�o s�o iguais!!");
	}
	
	// verifica se a soma do valores da diagonal principal e da secundaria s�o iguais ao valorEsperado
	// A diagonal principal � formada pelos valores onde as coordenadas s�o iguais (linha = coluna)
	// A diagonal secund�ria n�o segue um padr�o em rela��o as coordenadas
	for(somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, linha = 0; linha<3 && quadradoMagico == True; linha++){
		for(coluna = 0 ; coluna<3 && quadradoMagico == True; coluna++){
			if (linha == coluna){
				somaDiagonalPrincipal += matriz[linha][coluna];	
			}
			if ((linha + coluna) == 2){
				somaDiagonalSecundaria += matriz[linha][coluna];
			}
		}
	}
	// quando os loops acabam eu tenho a soma da diagonal principal
	if (somaDiagonalPrincipal != valorEsperado){
		quadradoMagico = False;
	}
	if (quadradoMagico == True){
		printf("\nA soma da diagonal principal � igual!");
	}
	else{
		printf("\nA soma da diagonal principal n�o � igual!");
	}
	// quando os loops acambam eu tenho a soma da diagonal secundaria
	if (somaDiagonalSecundaria != valorEsperado){
		quadradoMagico = False;
	}
	if (quadradoMagico == True){
		printf("\nA soma da diagonal secundaria � igual!");
	}
	else{
		printf("\nA soma da diagonal secundaria n�o � igual!");
	}
}
