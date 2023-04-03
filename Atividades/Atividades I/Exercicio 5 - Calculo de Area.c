#include <stdio.h>

int main()
{
    float x;

    printf("Informe o valor do lado do quadrado: ");
    scanf("%f", &x);

    x = x * x;

    printf("\nO valor da área é: %.2f m²", x);

    x = x * 2;

    printf("\nO valor do dobro da área é: %.2f m²", x);

    return 0;
}
