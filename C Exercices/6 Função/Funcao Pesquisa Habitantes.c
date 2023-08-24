#include<stdio.h>
#include<locale.h>
/*
A prefeitura de uma cidade fez uma pesquisa entre seus
habitantes, coletando dados sobre salário, sexo, idade e
numero de filhos.
- Crie um registro capaz de armazenar os dados de um
habitante e defina um vetor com capacidade para até 20
habitantes.
- Crie um programa para ler os dados de cada habitante,
calcular e mostrar:
 – A média de salários da população;
 – O número médio de filhos;
 – O maior salário e o menor salário;
 – O percentual de mulheres com salário superior a R$1.500,00
 
 Atenção: Os resultados produzidos por cada função deverão ser impressos
pela função main() e nunca dentro das funções. Não use variáveis globais.
*/

struct Habitante{
	int idade;
	float salario, numeroFilhos;
	char sexo;
};

float mediaDosSalarios(float mediaSalario, struct Habitante vet_hab[], int i) {
	for(i=0; i<20; i++){
		mediaSalario += vet_hab[i].salario;
	}
	mediaSalario = mediaSalario/3;
	return mediaSalario;
}
float mediaDosFilhos(float mediaFilhos, struct Habitante vet_hab[], int i) {
	for(i=0; i<20; i++){
		mediaFilhos += vet_hab[i].numeroFilhos;
	}
	mediaFilhos = mediaFilhos/3;
	return mediaFilhos;
}
void maiorMenorSalario(float *menorSalario, float *maiorSalario, struct Habitante vet_hab[], int i) {
	*maiorSalario = vet_hab[0].salario;
	*menorSalario = vet_hab[0].salario;
	for(i=0; i<20; i++){
		if (vet_hab[i].salario > *maiorSalario){
			*maiorSalario = vet_hab[i].salario;
		}
		if (vet_hab[i].salario < *menorSalario){
			*menorSalario = vet_hab[i].salario;
		}
	}
}
float porcentagem(float percentualSalarioMulheresSuperior1500, struct Habitante vet_hab[], int i) {
	for(i=0; i<20; i++){
		if (vet_hab[i].sexo == 'F' && vet_hab[i].salario > 1500){
			percentualSalarioMulheresSuperior1500 ++;
		}
	}
	percentualSalarioMulheresSuperior1500 = (percentualSalarioMulheresSuperior1500 * 100)/3;
	return percentualSalarioMulheresSuperior1500;
}
main(){
	setlocale(LC_ALL, "Portuguese");
	struct Habitante vet_hab[20];
	int i;
	float mediaSalario = 0, mediaFilhos = 0, percentualSalarioMulheresSuperior1500, maiorSalario, menorSalario;
	
	for(i=0; i<20; i++){
		printf("Habitante %d", i+1);
		printf("\nDigite sua idade: ");
		scanf("%d", &vet_hab[i].idade);
		printf("\nDigite seu sexo: (M/F/X para indefinido ou outro): ");
		scanf(" %c", &vet_hab[i].sexo);
		printf("\nDigite seu salário: ");
		scanf("%f", &vet_hab[i].salario);
		printf("\nDigite o número de filhos que possui: ");
		scanf("%f", &vet_hab[i].numeroFilhos);
		fflush(stdin);
		system("cls"); // limpa a tela
	}
	
	// calculando os dados
	mediaSalario = mediaDosSalarios(mediaSalario, vet_hab, i);
	mediaFilhos = mediaDosFilhos(mediaFilhos, vet_hab, i);
	maiorMenorSalario(&menorSalario, &maiorSalario, vet_hab, i);
	percentualSalarioMulheresSuperior1500 = porcentagem(percentualSalarioMulheresSuperior1500, vet_hab, i);
	
	// imprimindo os dados
	printf("Imprimindo dados  da pesquisa da prefeitura:\n");
	printf("\nA média de salários da população: %.2f\n", mediaSalario);
	printf("\nO número médio de filhos: %.2f\n", mediaFilhos);
	printf("\nO maior salário: %.2f e o menor salário: %.2f\n", maiorSalario, menorSalario);
	printf("\nO percentual de mulheres com salário superior a R$1.500,00: %.2f%%\n", percentualSalarioMulheresSuperior1500);
}
