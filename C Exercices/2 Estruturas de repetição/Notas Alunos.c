#include<stdio.h>
#include<locale.h>

/* EXERCICIO 5
	Fazer um programa que leia um conjunto de valores
	correspondentes às notas que alunos obtiveram em
	uma prova. Quando o valor fornecido for um número
	negativo, significa que não existem mais pontos para
	serem lidos. Após isso seu programa deverá:
	
	- Escrever quantas notas são maiores ou iguais a
	6.0
	-  Escrever quantas notas são maiores ou iguais a
	4.0 e menores que 6.0
	-  Escrever quantos notas são menores que 4.0
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int nota_aluno, notas_maior_igual_6 = 0, nota_maiorigual_4_menor_6 = 0, nota_menor_4 = 0;
	
	printf("Digite a nota que os alunos obtiveram na prova");
	printf("\nNota (Negativo para sair): ");
	scanf("%d", &nota_aluno);
	while (nota_aluno >= 0){
		if (nota_aluno < 4){
			nota_menor_4 ++;
		}
		else{
			if (nota_aluno >= 6){
				notas_maior_igual_6 ++;
			}
			else {
				nota_maiorigual_4_menor_6 ++;
			}
		}
		printf("Nota (Negativo para sair): ");
		scanf("%d", &nota_aluno);
	}
	printf("Quantia de notas maiores ou iguais a 6: %d", notas_maior_igual_6);
	printf("\nQuantia de notas maiores ou iguais a 4 e menores que 6: %d", nota_maiorigual_4_menor_6);
	printf("\nQuantia de notas menores que 4: %d", nota_menor_4);
}
