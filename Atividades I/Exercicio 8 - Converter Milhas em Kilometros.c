#include <stdio.h>

int main()
{
    float dist;

    printf("Informe a distância em milhas: ");
    scanf("%f", &dist);

    dist = dist / 0.6214;

    printf("A distância em quilômetros é: %.2f KM\n", dist);

    return 0;
}
