#include <stdio.h>

int main()
{
    float valor;

    printf("Informe o valor depositado: ");
    scanf("%f", &valor);

    valor += valor * 0.05;

    printf("O valor da aplicação após um mês é: %.2f R$\n", valor);

    return 0;
}
