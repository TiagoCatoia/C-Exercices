#include <stdio.h>
#include <locale.h>
/*
EXERCICIO 2
Faça um programa que preencha dois vetores A e B com dez
elementos numéricos cada um calcule e apresente um
vetor C resultante da intercalação deles. Por exemplo:
*/
main(){
	setlocale(LC_ALL, "Portuguese");
    int A[10], B[10], C[20] ,i = 1, indice_par = 0, indice_impar = 1;

    while (i <= 10){
        printf("Digite o %dº número do vetor A: ", i);
        scanf("%d", &A[i-1]);
        i ++;
    }
    i = 1;
    printf("\n");
    while (i <= 10){
        printf("Digite o %dº número do vetor B: ", i);
        scanf("%d", &B[i-1]);
        i ++;
    }
    i = 0;
    printf("\nVetor A: ");
    while (i < 10){
        printf("%d | ", A[i]);
        i ++;
    }
    i = 0;
    printf("\nVetor B: ");
    while (i < 10){
        printf("%d | ", B[i]);
        i ++;
    }
    i = 0;
    while (i < 10){
    	C[indice_par] = A[i];
    	C[indice_impar] = B[i];
    	indice_par += 2;
    	indice_impar += 2;
    	i ++;
	}
    i = 0;
    printf("\nVetor C: ");
    while (i < 20){
    	printf("%d | ", C[i]);
    	i ++;
	}
}
