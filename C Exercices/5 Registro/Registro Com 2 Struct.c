#include <stdio.h>
#include <locale.h>

struct data
	{	int dia, mes, ano;
	};

struct Funcionario
	{	int codigo, num_dep;
		char cargo[40], nome[50];
		float salario;
		struct data data_nasc;
	};

main(){
	setlocale(LC_ALL, "Portuguese");
	struct Funcionario vet_func[3];
	int i;
	for(i=0; i<3; i++){
		printf("Digite o nome do funcionário: ");
		gets(vet_func[i].nome);
		printf("\nDigite o cargo do funcionário: ");
		gets(vet_func[i].cargo);
		printf("\nDigite o código do funcionário: ");
		scanf("%d", &vet_func[i].codigo);
		printf("\nDigite o número de dependentes do funcionário: ");
		scanf("%d", &vet_func[i].num_dep);
		printf("\nDigite o salário do funcionário: ");
		scanf("%f", &vet_func[i].salario);
		printf("\nDigite o dia, o mês e o ano de nascimento do funcionário:\n");
		scanf("%d%d%d", &vet_func[i].data_nasc.dia, &vet_func[i].data_nasc.mes, &vet_func[i].data_nasc.ano);
		fflush(stdin);
		system("cls"); // limpa a tela
	}
	
	printf("Imprimindo os funcionários armazenados:\n");
	for(i=0; i<3; i++){
		printf("Nome: %s | Cargo: %s\n", vet_func[i].nome, vet_func[i].cargo);
		printf("Código: %d | Número de dependentes: %d | Salário: %.2f\n", vet_func[i].codigo, vet_func[i].num_dep, vet_func[i].salario);
		printf("Data de nascimento: %d\/%d\/%d\n", vet_func[i].data_nasc.dia, vet_func[i].data_nasc.mes, vet_func[i].data_nasc.ano);
	}
}
