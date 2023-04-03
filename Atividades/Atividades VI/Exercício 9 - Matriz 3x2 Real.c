<<<<<<< HEAD
#include <stdio.h>

int main()
{
    float matrizA[2][3], matrizB[3][2];
    int x, y;

    for(x = 0; x < 2; x++){
        for(y = 0; y < 3; y++){
            printf("\nInforme o %d e %d da matriz: ", x+1, y+1);
            scanf("%f", &matrizA[x][y]);
        }
    }

    for(x = 0; x < 2; x++){
        for(y = 0; y < 3; y++){
            matrizB[y][x] = matrizA[x][y];
        }
    }

    printf("\nMatriz original:\n");
    for(x = 0; x < 2; x++){
        for(y = 0; y < 3; y++){
            printf("[%f]", matrizA[x][y]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for(y = 0; y < 3; y++){
        for(x = 0; x < 2; x++){
            printf("[%f]", matrizB[y][x]);
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main()
{
    float matrizA[2][3], matrizB[3][2];
    int x, y;

    for(x = 0; x < 2; x++){
        for(y = 0; y < 3; y++){
            printf("\nInforme o %d e %d da matriz: ", x+1, y+1);
            scanf("%f", &matrizA[x][y]);
        }
    }

    for(x = 0; x < 2; x++){
        for(y = 0; y < 3; y++){
            matrizB[y][x] = matrizA[x][y];
        }
    }

    printf("\nMatriz original:\n");
    for(x = 0; x < 2; x++){
        for(y = 0; y < 3; y++){
            printf("[%f]", matrizA[x][y]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for(y = 0; y < 3; y++){
        for(x = 0; x < 2; x++){
            printf("[%f]", matrizB[y][x]);
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
