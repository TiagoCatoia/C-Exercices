#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

typedef struct
{
	int dia, mes, ano;
}data;

main () {
	setlocale(LC_ALL, "Portuguese");
	// a fun��o retorna um ponteiro para void
	// void *malloc (int num)
	
	//int x;
	//int *px; tipo da variavel onde o ponteiro aponta e n�o o tipo do ponteiro
	//px = &x;
	char *ptr;
	ptr = (char*) malloc(sizeof(char)*50); // ponteiro que vai receber o endere�o da memoria que foi alocada
	// malloc retorna um endere�o se consegui alocar a vari�vel
	// (char) informa que aponta para um char (informa o tipo da variavel para saber qnts bytes precisa para alocar)
	// (char*) � o do retorno da fun��o malloc
	
	//sizeof d� a quantidade de byte de um tipo
	// multiplica por 50 significa: string[50] o tamanho do bloco de bytes que precisa ser alocado
	
	data *d; // cria o ponteiro para o tipo data
	d = (data*) malloc(sizeof(data)); // aloca mem�ria din�micamente para o registro data
	d->dia = 20; // ponteiro para registro usa o operador ->
	d->mes= 9;
	d->ano = 2023;
	
	printf("Data de hoje: %d\/%d\/%d", d->dia, d->mes, d->ano);
	free(d); // libera mem�ria alocada
	
	// outra op��o � usando o calloc
	ptr = (char*) calloc(n, sizeof(char));
	
	// para realocar um espa�o de mem�ria: realloc()
	ptr = (int*) realloc(ptr, n*sizeof(int))
	// ptr � o ponteiro da variav�l que est� alocada
}
