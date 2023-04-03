<<<<<<< HEAD
#include <stdio.h>

int main()
{
    float mat[7][8];
    int x, y;

    for (x = 0; x < 7; x++){
        for (y = 0; y < 8; y++){
            mat[x][y] = x + y;
        }
    }
    printf("\nMatriz:\n");
    for (x = 0; x < 7; x++){
        for (y = 0; y < 8; y++){
            printf("[%0.1f]\t", mat[x][y]);
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main()
{
    float mat[7][8];
    int x, y;

    for (x = 0; x < 7; x++){
        for (y = 0; y < 8; y++){
            mat[x][y] = x + y;
        }
    }
    printf("\nMatriz:\n");
    for (x = 0; x < 7; x++){
        for (y = 0; y < 8; y++){
            printf("[%0.1f]\t", mat[x][y]);
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
