<<<<<<< HEAD
#include <stdio.h>

int main() {
    int matriz[5][5], c, l, x = 0;
    
    printf("\nInforme os valores da matriz: \n");
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            scanf("%d", &matriz[l][c]);
            x += matriz[l][c];
        }
    }
    
    printf("\nMatriz: \n");
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            printf("[%d]", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos elementos é %d\n", x);
    
    return 0;
}
=======
#include <stdio.h>

int main() {
    int matriz[5][5], c, l, x = 0;
    
    printf("\nInforme os valores da matriz: \n");
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            scanf("%d", &matriz[l][c]);
            x += matriz[l][c];
        }
    }
    
    printf("\nMatriz: \n");
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            printf("[%d]", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos elementos é %d\n", x);
    
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
