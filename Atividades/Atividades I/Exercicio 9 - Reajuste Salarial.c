#include <stdio.h>

int main()
{
    float salario;

    printf("Informe o valor do salário: ");
    scanf("%f", &salario);

    salario += salario * 0.15;

    printf("O valor do salário reajustado é: %.2f R$\n", salario);

    return 0;
}
