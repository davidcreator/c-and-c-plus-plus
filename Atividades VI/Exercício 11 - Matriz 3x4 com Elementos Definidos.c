#include <stdio.h>

int main()
{
    float mat[3][4];
    int x, y;

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 4; y++) {
            printf("\nInforme o elemento %d%d da matriz: ", x+1, y+1);
            scanf("%f", &mat[x][y]);
        }
    }

    system("clear");
    printf("\nMatriz:\n");
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 4; y++) {
            printf("[%g]", mat[x][y]);
        }
        printf("\n");
    }
    printf("\nElemento 1-1 = %g", mat[0][0]);
    printf("\nElemento 3-4 = %g", mat[2][3]);

    return 0;
}
