#include <stdio.h>

int main() {
    float mat[4][3], soma = 0.0;
    int x, y;

    for (x = 0; x < 4; x++) {
        for (y = 0; y < 3; y++) {
            printf("\nInforme o elemento %d%d da matriz: ", x + 1, y + 1);
            scanf("%f", &mat[x][y]);
        }
    }

    printf("\nMatriz:\n");
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 3; y++) {
            printf("[%.2f]", mat[x][y]);
        }
        printf("\n");
    }

    printf("\nInforme a linha que deseja somar os elementos: ");
    scanf("%d", &x);
    x -= 1;

    for (y = 0; y < 3; y++) {
        soma += mat[x][y];
    }

    printf("\n\nA soma dos elementos da linha é: %.2f", soma);

    return 0;
}
