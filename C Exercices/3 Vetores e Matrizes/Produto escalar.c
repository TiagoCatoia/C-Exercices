#include <stdio.h>
#include <locale.h>
/*  Lista de Exercícios – Algoritmos e Programação II

EXERCICIO 1 da lista
Em geometria analítica, dois vetores podem ser definidos como a=<a1,a2,a3> e 
b=<b1,b2,b3>. Escreva um programa que leia dois vetores (a e b) de três posições 
cada e efetue o produto escalar entre eles. O produto escalar é obtido por a.b = 
a1b1+a2b2+a3b3. De acordo com o exemplo dado abaixo, o calculo a ser efetuado 
será: 1x5+4x2+7x3
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	float a[3], b[3], produto_escalar = 0;
	int i = 1;
	
	while (i <= 3){
        printf("Digite o %dº número do vetor a: ", i);
        scanf("%f", &a[i-1]);
        i ++;
    }
    i = 1;
    printf("\n");
    while (i <= 3){
        printf("Digite o %dº número do vetor b: ", i);
        scanf("%f", &b[i-1]);
        i ++;
    }
    i = 0;
    printf("\nVetor a: ");
    while (i < 3){
    	printf("%.2f | ", a[i]);
    	i ++;
	}
	i = 0;
    printf("\nVetor b: ");
    while (i < 3){
    	printf("%.2f | ", b[i]);
    	i ++;
	}
	i = 0;
	while (i < 3){
		produto_escalar += (a[i] * b[i]);
		i ++;
	}
	printf("\nProduto escalar = (%.2f * %.2f) + (%.2f * %.2f) (%.2f * %.2f)", a[0], b[0], a[1], b[1], a[2], b[2]);
	printf("\nProduto escalar = %.2f", produto_escalar);
}
