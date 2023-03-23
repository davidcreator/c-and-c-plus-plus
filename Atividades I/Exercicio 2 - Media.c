#include <stdio.h>

int main()
{
    float x, y, z, w, q;

    printf("Informe a Primeira Nota: ");
    scanf("%f", &x);
    printf("\nInforme a Segunda Nota: ");
    scanf("%f", &y);
    printf("\nInforme a Terceira Nota: ");
    scanf("%f", &z);
    printf("\nInforme a Quarta Nota: ");
    scanf("%f", &w);

    q = (x + y + z + w) / 4;

    printf("\nO resultado da media: %.2f", q);

    return 0;
}
