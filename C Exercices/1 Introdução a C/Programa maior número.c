#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float num1,num2;
	
	printf("Digite dois n�meros para ver o maior:");
	scanf("%f%f",&num1,&num2);
	
	if (num1 > num2)
		printf("O maior n�mero e o %.2f",num1);
	else
		if (num2 > num1)
			printf("O maior n�mero e o %.2f",num2);
		else
			printf("Os n�meros possuem o mesmo valor!");
}
