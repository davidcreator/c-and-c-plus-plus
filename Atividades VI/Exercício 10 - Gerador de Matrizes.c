<<<<<<< HEAD
#include <stdio.h>

int main()
{
    float mat[5][5], mat_cubo[5][5];
    int x, y;

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("\nInforme o elemento %d%d da matriz: ", x+1, y+1);
            scanf("%f", &mat[x][y]);
        }
    }
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            mat_cubo[x][y] = 3 * mat[x][y];
        }
    }
    system("clear");
    printf("\nMatriz:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("[%.2f]", mat[x][y]);
        }
        printf("\n");
    }
    printf("\nMatriz Cubo:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("[%.2f]", mat_cubo[x][y]);
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main()
{
    float mat[5][5], mat_cubo[5][5];
    int x, y;

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("\nInforme o elemento %d%d da matriz: ", x+1, y+1);
            scanf("%f", &mat[x][y]);
        }
    }
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            mat_cubo[x][y] = 3 * mat[x][y];
        }
    }
    system("clear");
    printf("\nMatriz:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("[%.2f]", mat[x][y]);
        }
        printf("\n");
    }
    printf("\nMatriz Cubo:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("[%.2f]", mat_cubo[x][y]);
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
