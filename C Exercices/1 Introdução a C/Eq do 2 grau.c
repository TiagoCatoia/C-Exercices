#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, delta, x1, x2, x;

    printf("Digite o valor de a:");
    scanf("%f", &a);

    printf("Digite o valor de b:");
    scanf("%f", &b);

    printf("Digite o valor de c:");
    scanf("%f", &c);

    if (a == 0)
        printf("a = 0, logo a equação tornou-se do 1º grau");
    else
    {
        delta = (b * b - (4 * a * c));
        if (delta < 0)
            printf("Não existe raíz real!");
        else if (delta == 0)
        {
            x = ((-b) / (2 * a));
            printf("Delta = 0, logo existe uma raiz x = %.2f", x);
        }
        else if (delta > 0)
        {
        	delta = pow(delta, 0.5);
            x1 = ((-b + delta) / (2 * a));
            x2 = ((-b - delta) / (2 * a));
            printf("Delta > 0, logo temos duas raízes: x1 = %.2f x2 = %.2f", x1, x2);
        }
    }
}

