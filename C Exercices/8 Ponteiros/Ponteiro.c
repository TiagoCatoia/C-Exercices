#include<stdio.h>
#include<locale.h>

void criar_vetor(int *pvet) // *pvet poderia ser pvet[]
{
	int i;
	for (i=0; i<10; i++) {
		*(pvet + i) = i; // se a fun��o recebesse pvet[] no par�metro, pvet[] ficaria: pvet[i] = i
	}	
}
main() {
	setlocale(LC_ALL, "Portuguese");
	m[] = {1, 3, 5, 2};
	int *p = m, i; // *p est� apontado para o indice 0 do vetor m, m[] � um ponteiro constante, j� *p � um ponteiro vari�vel logo pode ser incrementado
	
	for (i=0; i<4; i++) {
		printf("%d\n", *p) // poderia *(m + i); n�o incrementa o ponteiro apenas pela o endere�o inicial e soma
		p++; // ponteiro vari�vel pode ser incrementado, mas m++; n�o poderia, para fazer isso: m[i] i++
		// incrementa o ponteiro( 1 * sizeoff(tipo) ) n�mero de bytes do tipo
	}
	
	
	int *pp = &m[3];
	printf("%d", pp-p) // subtra��o de ponteiros de vetores( para saber quantos elementos existem entre os dois ponteiros )
}
