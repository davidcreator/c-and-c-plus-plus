#include <stdio.h>

int main()
{
    float peso, dias;

    printf("Informe a quantidade de alimento em quilogramas: ");
    scanf("%f", &peso);

    peso = peso * 1000; // Transforma em gramas a quantidade de quilos
    dias = peso / 50;

    printf("A quatidade de dias que irá durar o alimento é: %.2f", dias);

    return 0;
}
