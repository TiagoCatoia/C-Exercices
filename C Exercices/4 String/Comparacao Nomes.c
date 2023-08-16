#include <stdio.h>
#include <locale.h>
#include <string.h>	

main(){
	char nome1[40], nome2[40], sexo;
	setlocale(LC_ALL, "Portuguese");
	
	sexo = 'F'; // a atribuição de caractere funciona, mas não para string
	strcpy(nome1,"Tiago Catoia");
	puts(nome1);
	strcpy(nome2,nome1);
	puts(nome2);
	
	if (strcmp(nome1,nome2) == 0){
		printf("Strings iguais!");
	}
	else{
		if(strcmp(nome1,nome2) < 0){
			printf("As strings estão em ordem crescente!");
		}
		else{
			printf("As strings estão em ordem decrescente!");
		}
	}
}
