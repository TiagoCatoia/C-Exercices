#include<stdio.h>
#include<locale.h>

/* EXERCICIO 3
	Fa�a um programa para mostrar a tabuada dos
	n�meros de 1 a 10.
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int tab = 1, num = 1;
	
	while (tab <= 10){
		printf("\nTabuada do %d", tab);
		while (num <= 10){
			printf("\n%d x %d = %d", tab, num, tab * num);
			num ++;
		}
		tab ++;
		num = 1;
		printf("\n");
	}
}
