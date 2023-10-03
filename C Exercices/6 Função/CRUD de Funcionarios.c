#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#define max 100

typedef struct
{
	int codigo;
	char nome[40], cargo[40];
}Funcionario;

int menuOpcoes() {
	printf("Menu de op��es\n");
	int op;
	printf("\t1. Inserir funcion�rio\n\t2. Consultar funcion�rios\n");
	printf("\t3. Excluir funcion�rio\n\t4. Alterar funcion�rio\n\t5. Sair\nDigite a op��o: ");
	fflush(stdin); // evitar gets antes do scanf
	scanf("%d", &op);
	return op;
}
int inserirFunc(Funcionario funcs[], int *count) { // n�o adianta colocar tamanho em funcs[tamanho] pois ser� ignorado
	if (*count<max){ // verifica se ainda tem espa�o no vetor
		printf("\nC�digo do funcion�rio: ");
		scanf("%d", &funcs[*count].codigo); // poderia adicionar uma chamada a fun��o que verifica se funcionario existe para n�o cadastrar 2 funcionarios com o mesmo c�digo
		fflush(stdin); // evitar gets antes do scanf
		printf("\nNome do funcion�rio: ");
		gets(funcs[*count].nome);
		printf("\nCargo do funcion�rio: ");
		gets(funcs[*count].cargo);
		// &count esta passando o ponteiro de count, para alterar o valor do caount da fun��o main e n�o o count da fun��o local
		// *count no parametro indica que est� recebendo um ponteiro
		// & operador de endere�o e * operador de conte�do(acessa o counte�do apontado pelo ponteiro) e count acessa o conteudo local
		(*count)++; // primeiro acessa o local de m�moria e depois incrementa
		return 1;
	}
	return 0;
}
int verificaSeFuncExiste(Funcionario funcs[], int count, int achou) {
	int codigoVerificador, i;
	achou = -1;
	printf("\nDigite o c�digo do funcion�rio: ");
	scanf("%d", &codigoVerificador);
	for(i=0; i<count; i++){
		if (codigoVerificador == funcs[i].codigo) {
			achou = i;
		}
	}
	return achou;
}
int alterarFuncionario(Funcionario funcs[], int *count) {
	int achou;
	achou = verificaSeFuncExiste(funcs, *count, achou);
	if (achou >= 0){
		printf("\nDigite os novos dados do funcion�rio\n");
		printf("\033[1;31mSe deseja alterar o c�digo tente excluir o funcion�rio e inserir novamente no sistema!\033[0m\n");
		fflush(stdin); // evitar gets antes do scanf
		printf("\nNome: ");
		gets(funcs[achou].nome);
		printf("\nCargo: ");
		gets(funcs[achou].cargo);
		return 1;
	}
	else{
		return 0;
	}
} 
void imprimirFuncionarios(Funcionario funcs[], int count){
	int i;
	system("cls");
	for(i=0; i<count; i++){
		printf("C�digo: %d | Nome: %s | Cargo: %s\n", funcs[i].codigo, funcs[i].nome, funcs[i].cargo);
	}
}
int excluirFuncionario(Funcionario funcs[], int *count){
	int achou, i;
	achou = verificaSeFuncExiste(funcs, *count, achou);
	if (achou >= 0){
		printf("\nExcluindo funcion�rio...\n");
		for (i=0; i<*count; i++){
			if (funcs[achou].codigo == funcs[i].codigo){ // strcpy � usada para copiar strings 
				funcs[i].codigo = funcs[i+1].codigo; // uma maneira mais simples seria simplismente: funcs[i] = funcs[i+1]
				strcpy(funcs[i].nome, funcs[i+1].nome);
				strcpy(funcs[i].cargo, funcs[i+1].cargo);
			}
		}
		(*count)--;
		return 1;
	}
	else{
		return 0;
	}
}
main(){
	setlocale(LC_ALL, "Portuguese");
	Funcionario funcs[max]; // declara um vetor de registro de funcion�rios
	int count = 0, result;
	int op = menuOpcoes();
	while (op != 5){ // poderia ter usado o switch
		if (op == 1){
			result = inserirFunc(funcs, &count); // o nome da func�o � um ponteiro que leva ao endere�o n� mem�ria (funcs leva o primeiro endere�o do vetor)
			if (result){
				printf("\nFuncion�rio inserido com sucesso!\n");
			}
			else {
				printf("\nN�o foi poss�vel inserir o funcion�rio, pois n�o existe funcionario com este c�digo!\n");
			}
		}
		else if (op == 2){
			printf("\nImprimindo Funcion�rios...\n");
			imprimirFuncionarios(funcs, count);
		}
		else if (op == 3){
			printf("\nCarregando dados dos funcion�rios...\n");
			result = excluirFuncionario(funcs, &count);
			if (result){
				printf("\nFuncion�rio excluido com sucesso!\n");
			}
			else {
				printf("\nN�o foi poss�vel exluir, pois n�o existe funcionario com este c�digo!\n");
			}
		}
		else if (op == 4){
			printf("\nCarregando dados dos funcion�rios...\n");
			result = alterarFuncionario(funcs, &count);
			if (result){
				printf("\nDados alterados com sucesso!\n");
			}
			else{
				printf("\nN�o foi poss�vel alterar os dados, pois n�o existe funcionario com este c�digo!\n");
			}
		}
		else {
			printf("\nOp��o inv�lida, tente novamente!\n\n");
		}
		printf("\n");
		op = menuOpcoes(); 
	}
	printf("\nEncerrando o programa...");
}
