#include <stdio.h>
#include <locale.h>
/*
EXERCICIO 1
Faça um programa que preencha vetor com oito números
inteiros, calcule e mostre dois vetores resultantes. O
primeiro vetor deve conter os números positivos e o
segundo deve conter os números negativos. Atenção:
cada vetor terá no máximo oito posições, que podem
não ser completamente usadas. Não deve haver
posições vazias entre dois valores.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	int num,i = 1, vetor_inicial[8], positivos[8], negativos[8], contador_positivos = 0, contador_negativos = 0;
	
	while (i <= 8){
		printf("Digite o %d� valor para adicionar no vetor: ", i);
		scanf("%d", &num);
		vetor_inicial[i-1] = num;
		i ++;
	}
	i = 0;
	while (i < 8){
		if (vetor_inicial[i] > 0){
			positivos[contador_positivos] = vetor_inicial[i];
			contador_positivos ++;
		}
		else if (vetor_inicial[i] < 0){
			negativos[contador_negativos] = vetor_inicial[i];
			contador_negativos ++;
		}
		i ++;
	}
	printf("\nPositivos: ");
	for(i = 0; i < contador_positivos; i++){
		printf("\n%d", positivos[i]);
	}
	printf("\nNegativos: ");
	for(i = 0; i < contador_negativos; i++){
		printf("\n%d", negativos[i]);
	}
}