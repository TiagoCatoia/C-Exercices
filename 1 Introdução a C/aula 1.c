#include <stdio.h> // biblioteca padrão

int main(void) 
{
    int idade, dia, mes, ano; // declaração de variável previamente
    char nome[100], sexo;

    printf("Digite seu primeiro nome:");
    scanf("%s", nome); // %s sequência de caracteres (string)

    printf("Digite sua idade: "); 
    scanf("%d", &idade); // %d decimal/inteiro

    printf("Digite seu sexo (F ou M): ");
    scanf(" %c", &sexo); // %c ler um caractere

    printf("Digite sua data de nascimento (DD MM AAAA): ");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Dia: %d Mes: %d Ano: %d\n", dia, mes, ano);

    return 0; // não é nessesário - mensagem para o sistema operacional que o programa acabou
}
