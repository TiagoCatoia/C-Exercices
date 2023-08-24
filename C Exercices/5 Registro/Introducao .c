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
	printf("Digite o nome do funcionário: ");
	gets(func.nome);
	printf("\nDigite o cargo do funcionário: ");
	gets(func.cargo);
	printf("\nDigite o código do funcionário: ");
	scanf("%d", &func.codigo);
	printf("\nDigite o número de dependentes do funcionário: ");
	scanf("%d", &func.num_dep);
	printf("\nDigite o salário do funcionário: ");
	scanf("%f", &func.salario);
	system("cls"); // limpa a tela
	printf("Nome: %s | Cargo: %s\n", func.nome, func.cargo);
	printf("Código: %d | Número de dependentes: %d | Salário: %f", func.codigo, func.num_dep, func.salario);
}
