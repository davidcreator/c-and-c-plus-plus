#include <stdio.h>

int main()
{
    float valor[3], subtotal[3], quantidade[3], valor_total = 0.0;
    int x;
    char nome[3][30];

    for (x = 0; x < 3; x++) {
        printf("\nInforme o nome do produto: ");
        scanf("%s", nome[x]);
        printf("\nInforme a quantidade do produto: ");
        scanf("%f", &quantidade[x]);
        printf("\nInforme o valor do produto: ");
        scanf("%f", &valor[x]);
        subtotal[x] = valor[x] * quantidade[x];
        valor_total += subtotal[x];
        fflush(stdin);
    }

    for (x = 0; x < 3; x++) {
        printf("\nO subtotal do produto %s é de R$ %.2f", nome[x], subtotal[x]);
    }

    printf("\nO valor total é de R$ %.2f", valor_total);

    return 0;
}
