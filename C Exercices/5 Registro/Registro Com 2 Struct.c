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
		printf("Digite o nome do funcion�rio: ");
		gets(vet_func[i].nome);
		printf("\nDigite o cargo do funcion�rio: ");
		gets(vet_func[i].cargo);
		printf("\nDigite o c�digo do funcion�rio: ");
		scanf("%d", &vet_func[i].codigo);
		printf("\nDigite o n�mero de dependentes do funcion�rio: ");
		scanf("%d", &vet_func[i].num_dep);
		printf("\nDigite o sal�rio do funcion�rio: ");
		scanf("%f", &vet_func[i].salario);
		printf("\nDigite o dia, o m�s e o ano de nascimento do funcion�rio:\n");
		scanf("%d%d%d", &vet_func[i].data_nasc.dia, &vet_func[i].data_nasc.mes, &vet_func[i].data_nasc.ano);
		fflush(stdin);
		system("cls"); // limpa a tela
	}
	
	printf("Imprimindo os funcion�rios armazenados:\n");
	for(i=0; i<3; i++){
		printf("Nome: %s | Cargo: %s\n", vet_func[i].nome, vet_func[i].cargo);
		printf("C�digo: %d | N�mero de dependentes: %d | Sal�rio: %.2f\n", vet_func[i].codigo, vet_func[i].num_dep, vet_func[i].salario);
		printf("Data de nascimento: %d\/%d\/%d\n", vet_func[i].data_nasc.dia, vet_func[i].data_nasc.mes, vet_func[i].data_nasc.ano);
	}
}
