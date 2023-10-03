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
	printf("Menu de opções\n");
	int op;
	printf("\t1. Inserir funcionário\n\t2. Consultar funcionários\n");
	printf("\t3. Excluir funcionário\n\t4. Alterar funcionário\n\t5. Sair\nDigite a opção: ");
	fflush(stdin); // evitar gets antes do scanf
	scanf("%d", &op);
	return op;
}
int inserirFunc(Funcionario funcs[], int *count) { // não adianta colocar tamanho em funcs[tamanho] pois será ignorado
	if (*count<max){ // verifica se ainda tem espaço no vetor
		printf("\nCódigo do funcionário: ");
		scanf("%d", &funcs[*count].codigo); // poderia adicionar uma chamada a função que verifica se funcionario existe para não cadastrar 2 funcionarios com o mesmo código
		fflush(stdin); // evitar gets antes do scanf
		printf("\nNome do funcionário: ");
		gets(funcs[*count].nome);
		printf("\nCargo do funcionário: ");
		gets(funcs[*count].cargo);
		// &count esta passando o ponteiro de count, para alterar o valor do caount da função main e não o count da função local
		// *count no parametro indica que está recebendo um ponteiro
		// & operador de endereço e * operador de conteúdo(acessa o counteúdo apontado pelo ponteiro) e count acessa o conteudo local
		(*count)++; // primeiro acessa o local de mémoria e depois incrementa
		return 1;
	}
	return 0;
}
int verificaSeFuncExiste(Funcionario funcs[], int count, int achou) {
	int codigoVerificador, i;
	achou = -1;
	printf("\nDigite o código do funcionário: ");
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
		printf("\nDigite os novos dados do funcionário\n");
		printf("\033[1;31mSe deseja alterar o código tente excluir o funcionário e inserir novamente no sistema!\033[0m\n");
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
		printf("Código: %d | Nome: %s | Cargo: %s\n", funcs[i].codigo, funcs[i].nome, funcs[i].cargo);
	}
}
int excluirFuncionario(Funcionario funcs[], int *count){
	int achou, i;
	achou = verificaSeFuncExiste(funcs, *count, achou);
	if (achou >= 0){
		printf("\nExcluindo funcionário...\n");
		for (i=0; i<*count; i++){
			if (funcs[achou].codigo == funcs[i].codigo){ // strcpy é usada para copiar strings 
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
	Funcionario funcs[max]; // declara um vetor de registro de funcionários
	int count = 0, result;
	int op = menuOpcoes();
	while (op != 5){ // poderia ter usado o switch
		if (op == 1){
			result = inserirFunc(funcs, &count); // o nome da funcão é um ponteiro que leva ao endereço ná memória (funcs leva o primeiro endereço do vetor)
			if (result){
				printf("\nFuncionário inserido com sucesso!\n");
			}
			else {
				printf("\nNão foi possível inserir o funcionário, pois não existe funcionario com este código!\n");
			}
		}
		else if (op == 2){
			printf("\nImprimindo Funcionários...\n");
			imprimirFuncionarios(funcs, count);
		}
		else if (op == 3){
			printf("\nCarregando dados dos funcionários...\n");
			result = excluirFuncionario(funcs, &count);
			if (result){
				printf("\nFuncionário excluido com sucesso!\n");
			}
			else {
				printf("\nNão foi possível exluir, pois não existe funcionario com este código!\n");
			}
		}
		else if (op == 4){
			printf("\nCarregando dados dos funcionários...\n");
			result = alterarFuncionario(funcs, &count);
			if (result){
				printf("\nDados alterados com sucesso!\n");
			}
			else{
				printf("\nNão foi possível alterar os dados, pois não existe funcionario com este código!\n");
			}
		}
		else {
			printf("\nOpção inválida, tente novamente!\n\n");
		}
		printf("\n");
		op = menuOpcoes(); 
	}
	printf("\nEncerrando o programa...");
}
