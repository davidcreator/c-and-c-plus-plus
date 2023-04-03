#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Informe o Primeiro numero: ");
    scanf("%d", &x);
    printf("\nInforme o Segundo numero: ");
    scanf("%d", &y);

    z = (x * x) + (y * y);

    printf("\nO resultado: %d", z);

    return 0;
}
