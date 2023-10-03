#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

typedef struct
{
	int dia, mes, ano;
}data;

main () {
	setlocale(LC_ALL, "Portuguese");
	// a função retorna um ponteiro para void
	// void *malloc (int num)
	
	//int x;
	//int *px; tipo da variavel onde o ponteiro aponta e não o tipo do ponteiro
	//px = &x;
	char *ptr;
	ptr = (char*) malloc(sizeof(char)*50); // ponteiro que vai receber o endereço da memoria que foi alocada
	// malloc retorna um endereço se consegui alocar a variável
	// (char) informa que aponta para um char (informa o tipo da variavel para saber qnts bytes precisa para alocar)
	// (char*) é o do retorno da função malloc
	
	//sizeof dá a quantidade de byte de um tipo
	// multiplica por 50 significa: string[50] o tamanho do bloco de bytes que precisa ser alocado
	
	data *d; // cria o ponteiro para o tipo data
	d = (data*) malloc(sizeof(data)); // aloca memória dinâmicamente para o registro data
	d->dia = 20; // ponteiro para registro usa o operador ->
	d->mes= 9;
	d->ano = 2023;
	
	printf("Data de hoje: %d\/%d\/%d", d->dia, d->mes, d->ano);
	free(d); // libera memória alocada
	
	// outra opção é usando o calloc
	ptr = (char*) calloc(n, sizeof(char));
	
	// para realocar um espaço de memória: realloc()
	ptr = (int*) realloc(ptr, n*sizeof(int))
	// ptr é o ponteiro da variavél que está alocada
}
