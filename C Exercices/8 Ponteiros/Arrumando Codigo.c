#include<stdio.h>
#include<locale.h>

/*
1) Verifique o programa abaixo. Encontre o(s)
seu(s) erro(s) e corrija-o(s) para que o mesmo
escreva o número 10 na tela.
#include <stdio.h>
int main()
{ int x, *p, **q;
p = *x;
q = &p;
x = 10;
printf("\n%d\n", &q);
}
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	int x, *p, **q;
	
	x = 10;
	p = &x;
	q = &p;
	printf("\n%d\n", *(*q)); // ou **(q)
	
}
