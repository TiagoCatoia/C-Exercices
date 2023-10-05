#include<stdio.h>
#include<locale.h>

void criar_vetor(int *pvet) // *pvet poderia ser pvet[]
{
	int i;
	for (i=0; i<10; i++) {
		*(pvet + i) = i; // se a função recebesse pvet[] no parâmetro, pvet[] ficaria: pvet[i] = i
	}	
}
main() {
	setlocale(LC_ALL, "Portuguese");
	m[] = {1, 3, 5, 2};
	int *p = m, i; // *p está apontado para o indice 0 do vetor m, m[] é um ponteiro constante, já *p é um ponteiro variável logo pode ser incrementado
	
	for (i=0; i<4; i++) {
		printf("%d\n", *p) // poderia *(m + i); não incrementa o ponteiro apenas pela o endereço inicial e soma
		p++; // ponteiro variável pode ser incrementado, mas m++; não poderia, para fazer isso: m[i] i++
		// incrementa o ponteiro( 1 * sizeoff(tipo) ) número de bytes do tipo
	}
	
	
	int *pp = &m[3];
	printf("%d", pp-p) // subtração de ponteiros de vetores( para saber quantos elementos existem entre os dois ponteiros )
}
