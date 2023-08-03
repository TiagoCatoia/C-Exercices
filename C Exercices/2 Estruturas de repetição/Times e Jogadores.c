#include<stdio.h>
#include<locale.h>

/*  EXERCICIO 1:
	Em um campeonato de futebol existem 5 times com 11
	jogadores cada. Faça um programa que receba a
	idade, o peso e a altura de cada um dos jogadores,
	calcule e mostre:
	- A quantidade de jogadores com menos de 18 anos;
	- A média de idade dos jogadores de cada time;
	- A altura média de todos os jogadores do
	campeonato;
	- A porcentagem de jogadores de todos os times com
	mais de 80 quilos.
*/
int main()
{
setlocale(LC_ALL, "Portuguese");
int idade, x = 1, y= 1, minoridade = 0, num_de_jogadores = 0, peso_maior_80 = 0;
float peso, altura, media_idade = 0, media_altura = 0, peso_maior_80_porcentagem;
	while (x <= 5) {
		printf("\nTime %d", x);                                    //posde usar o defina max
		while (y <= 11){
			printf("\nJogador %d", y);
			printf("\nDigite a idade do jogador: ", idade);
			scanf("%d", &idade);
			printf("Digite o peso do jogador: ", peso);
			scanf("%f", &peso);
			printf("Digite o altura do jogador: ", altura);
			scanf("%f", &altura);
			if (idade < 18) {
				minoridade ++;
			}
			if (peso > 80) {
				peso_maior_80 ++;
			}
			media_idade += idade;
			media_altura += altura;
			y ++;
		}
		media_idade = media_idade/(y - 1);
		printf("\nMédia das idades dos jogadores do time: %.2f", media_idade);
		printf("\n");
		media_idade = 0;
		num_de_jogadores += (y - 1);
		y = 1;
		x ++;
	}
	peso_maior_80_porcentagem = (peso_maior_80 *100)/num_de_jogadores; //transformando para porcentagem
	printf("\nPorcentagem de jogadores do campeonato acima dos 80 quilos: %.0f%%", peso_maior_80);
	printf("\nQuantidade de jogadores com menos de 18 anos: %d", minoridade);
	media_altura = media_altura/num_de_jogadores;
	printf("\nMédia da altura de todos os jogadores do campeonato: %.2f", media_altura);
}
