#include<stdio.h>
#include<locale.h>
/*
A prefeitura de uma cidade fez uma pesquisa entre seus
habitantes, coletando dados sobre sal�rio, sexo, idade e
numero de filhos.
- Crie um registro capaz de armazenar os dados de um
habitante e defina um vetor com capacidade para at� 20
habitantes.
- Crie um programa para ler os dados de cada habitante,
calcular e mostrar:
 � A m�dia de sal�rios da popula��o;
 � O n�mero m�dio de filhos;
 � O maior sal�rio e o menor sal�rio;
 � O percentual de mulheres com sal�rio superior a R$1.500,00
 
 Aten��o: Os resultados produzidos por cada fun��o dever�o ser impressos
pela fun��o main() e nunca dentro das fun��es. N�o use vari�veis globais.
*/

struct Habitante{
	int idade;
	float salario, numeroFilhos;
	char sexo;
};

main(){
	setlocale(LC_ALL, "Portuguese");
	struct Habitante vet_hab[20];
	int i;
	float mediaSalario = 0, mediaFilhos = 0, percentualSalarioMulheresSuperior1500 = 0, maiorSalario, menorSalario;
	
	for(i=0; i<20; i++){
		printf("Habitante %d", i+1);
		printf("\nDigite sua idade: ");
		scanf("%d", &vet_hab[i].idade);
		printf("\nDigite seu sexo: (M/F/X para indefinido ou outro): ");
		scanf(" %c", &vet_hab[i].sexo);
		printf("\nDigite seu sal�rio: ");
		scanf("%f", &vet_hab[i].salario);
		printf("\nDigite o n�mero de filhos que possui: ");
		scanf("%f", &vet_hab[i].numeroFilhos);
		fflush(stdin);
		system("cls"); // limpa a tela
	}
	
	// calculando os dados
	maiorSalario = vet_hab[0].salario;
	menorSalario = vet_hab[0].salario;
	for(i=0; i<20; i++){
		mediaSalario += vet_hab[i].salario;
		mediaFilhos += vet_hab[i].numeroFilhos;
		if (vet_hab[i].salario > maiorSalario){
			maiorSalario = vet_hab[i].salario;
		}
		if (vet_hab[i].salario < menorSalario){
			menorSalario = vet_hab[i].salario;
		}
		if (vet_hab[i].sexo == 'F' && vet_hab[i].salario > 1500){
			percentualSalarioMulheresSuperior1500 ++;
		}
	}
	mediaSalario = mediaSalario/20;
	mediaFilhos = mediaFilhos/20;
	percentualSalarioMulheresSuperior1500 = (percentualSalarioMulheresSuperior1500 * 100)/20;
	
	// imprimindo os dados
	printf("Imprimindo dados  da pesquisa da prefeitura:\n");
	printf("\nA m�dia de sal�rios da popula��o: %.2f\n", mediaSalario);
	printf("\nO n�mero m�dio de filhos: %.2f\n", mediaFilhos);
	printf("\nO maior sal�rio: %.2f e o menor sal�rio: %.2f\n", maiorSalario, menorSalario);
	printf("\nO percentual de mulheres com sal�rio superior a R$1.500,00: %.2f%%\n", percentualSalarioMulheresSuperior1500);
