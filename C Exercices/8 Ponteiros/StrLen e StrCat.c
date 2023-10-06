#include<stdio.h>
#include<locale.h>

/*
Implemente duas funções StrLen() e StrCat() que 
funcionem como as funções strlen() e strcat() 
disponíveis na biblioteca string.h, respectivamente. 
Os protótipos estão definidos a seguir.

Obs: Você não deve usar as funções strlen() e strcat() já 
prontas. Use ponteiros para referenciar os elementos dos vetores.

Protótipos: 
int StrLen(char *s);
void StrCat(char *str1, char *str2)
*/

int StrLen(char *s)
{
	int count = 0;
	while (*s != '\0') {
		s++;
		count++;
	}
	return count;
}

void StrCat(char *str1, char *str2)
{
	int tamanhoStr1 = StrLen(str1);
	int tamanhoStr2 = StrLen(str2);
	int i;

	str1 += tamanhoStr1; // faz com que o ponteiro *str1 aponte para o final da string stringConc1
	for (i=0; i<tamanhoStr2; i++, str1++, str2++) {
		*str1 = *str2;
	}
	
}
main() {
	setlocale(LC_ALL, "Portuguese");
	char string[50], *s;
	
	printf("Entre com uma string para ver o tamanho: ");
	gets(string);
	
	s = string;
	printf("Tamanho da string: %d", StrLen(s));
	
	char stringConc1[50], stringConc2[50];
	char *str1, *str2;
	
	printf("\n");
	printf("\nAgora digite duas strings para concatena-las\n");
	printf("String 1: ");
	gets(stringConc1);
	printf("String 2: ");
	gets(stringConc2);
	
	str1 = stringConc1;
	str2 = stringConc2;
	StrCat(str1, str2);
	
	int tamStringConcatenada = StrLen(str1);
	int i = 0;
	
	printf("As duas strings concatenadas: ");
	for (i=0; i<tamStringConcatenada; i++, str1++) {
		printf("%c", *str1);
	}
}
