#include <stdio.h>
#include <locale.h>
#include <string.h>	

main(){
	char nome1[40], nome2[40], sexo;
	setlocale(LC_ALL, "Portuguese");
	
	sexo = 'F'; // a atribui��o de caractere funciona, mas n�o para string
	strcpy(nome1,"Tiago Catoia");
	puts(nome1);
	strcpy(nome2,nome1);
	puts(nome2);
	
	if (strcmp(nome1,nome2) == 0){
		printf("Strings iguais!");
	}
	else{
		if(strcmp(nome1,nome2) < 0){
			printf("As strings est�o em ordem crescente!");
		}
		else{
			printf("As strings est�o em ordem decrescente!");
		}
	}
}
