#include <stdio.h>

int main()
{
    float mat[4][3];
    int x, y;

    for (x = 0; x < 4; x++) {
        for (y = 0; y < 3; y++) {
            printf("\nInforme o elemento xy da matriz: ");
            scanf("%f", &mat[x][y]);
        }
    }

    system("clear"); // ou system("cls") no Windows

    printf("\nMatriz:\n");
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 3; y++) {
            printf("[%.2f]", mat[x][y]);
        }
        printf("\n");
    }

    printf("\nInforme a linha: ");
    scanf("%d", &x);
    x -= 1;
    printf("\nInforme a coluna: ");
    scanf("%d", &y);
    y -= 1;

    printf("\nO elemento da posição da linha %d e coluna %d é : [%.2f]", x+1, y+1, mat[x][y]);

    return 0;
}
