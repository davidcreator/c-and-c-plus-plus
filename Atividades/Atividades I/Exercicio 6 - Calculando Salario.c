#include <stdio.h>

int main()
{
    float salario, hora_trabalhada, valor_hora;

    printf("Informe o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);
    printf("\nInforme a quantidade de horas trabalhadas: ");
    scanf("%f", &hora_trabalhada);

    salario = valor_hora * hora_trabalhada;

    printf("\nO salário final é R$: %.2f", salario);

    return 0;
}
