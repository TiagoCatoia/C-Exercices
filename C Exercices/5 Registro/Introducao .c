#include <stdio.h>
#include <locale.h>

struct Funcionario
	{	int codigo, num_dep;
		char cargo[40], nome[50];
		float salario;
	};

main(){
	setlocale(LC_ALL, "Portuguese");
	struct Funcionario func;
	printf("Digite o nome do funcion�rio: ");
	gets(func.nome);
	printf("\nDigite o cargo do funcion�rio: ");
	gets(func.cargo);
	printf("\nDigite o c�digo do funcion�rio: ");
	scanf("%d", &func.codigo);
	printf("\nDigite o n�mero de dependentes do funcion�rio: ");
	scanf("%d", &func.num_dep);
	printf("\nDigite o sal�rio do funcion�rio: ");
	scanf("%f", &func.salario);
	system("cls"); // limpa a tela
	printf("Nome: %s | Cargo: %s\n", func.nome, func.cargo);
	printf("C�digo: %d | N�mero de dependentes: %d | Sal�rio: %f", func.codigo, func.num_dep, func.salario);
}
