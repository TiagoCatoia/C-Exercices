#include<stdio.h>
#include<stdlib.h> // para a fun��o fflush(), que limpa o bufer
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[30],nome2[30],sexo; // armazena o num de caracteres usados e para indicar o final, � usado o ult�mo como \0 (considerado um caractere), para que n�o tenha q ocupar os 30 mesmo o nome tendo menos caract
	int idade;
	float salario;
	
	printf("Digite seu primeiro nome:");
	/*scanf("%s",nome); // no vetor de v�rios carcteres(strings) o nome do  ponteiro � o nome do vetor, o nome do vetor j� carrega o endere�o na mem�ria */
	gets(nome); // gets, 's' para ler strings, o get armazena tamb�m espa�os em brancos, o get deve ser usado antes dos scanf se n�o o get n�o funciona pois o scanf causa problema no bufer
	printf("O nome %s foi armazenado com sucesso!", nome);
	
	printf("\nDigite sua idade:");
	scanf("%d",&idade);
	printf("A idade %d foi armazenada com sucesso!", idade);
	
	printf("\nDigite seu sal�rio:");
	scanf("%f",&salario);
	printf("O salario %.2f foi armazenado com sucesso!", salario);
	
	printf("\nDigite seu sexo:");
	scanf(" %c",&sexo); 
	printf("O sexo %c foi armazenado com sucesso!", sexo);
	
	printf("\nDigite outro nome:");
	fflush(stdin);  //para usar o get depois do scanf deve limpar o bufer primeiro com 'fflush(stdin)'
	gets(nome2);
	printf("O segundo nome %s foi armazenado com sucesso!",nome2);
}

