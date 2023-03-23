#include <stdio.h>

int main()
{
    float ponto_J, ponto_C, ponto_P, ponto_B;
    printf("\nO número de pontos do jogador João: ");
    scanf("%f", &ponto_J);
    printf("\nO número de pontos do jogador Chico: ");
    scanf("%f", &ponto_C);
    printf("\nO número de pontos do jogador Pedro: ");
    scanf("%f", &ponto_P);
    printf("\nO número de pontos do jogador Bola: ");
    scanf("%f", &ponto_B);

    if (ponto_J < (ponto_C + ponto_P + ponto_B) / 3.0 || ponto_P == ponto_B * 3.0 || ponto_C == 0 || ponto_B <= ponto_P / 2.0 || ponto_B < ponto_J + ponto_C) {
        printf("\nEquipe desclassificada!");
    } else {
        printf("\nEquipe classificada!");
    }

    return 0;
}
