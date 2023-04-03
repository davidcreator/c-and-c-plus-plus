#include <stdio.h>

int main()
{
    float altura, peso_ideal;

    printf("Informe a altura: ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("\nO peso ideal é: %.2f KG\n", peso_ideal);

    return 0;
}