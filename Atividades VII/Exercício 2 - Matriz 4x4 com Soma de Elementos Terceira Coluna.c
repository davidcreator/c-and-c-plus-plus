#include <stdio.h>

int main() {
    float m[4][4], sl = 0.0, sc = 0.0, sub = 0.0;
    int l, c;
    
    printf("\nInforme os valores da matriz: \n");
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            scanf("%f", &m[l][c]);

            if (l == 0 && (c == 0 || c == 1 || c == 2 || c == 3)) {
                sl += m[l][c];
            }
            if (c == 2 && (l == 0 || l == 1 || l == 2 || l == 3)) {
                sc += m[l][c];
            }
        }
    }
    
    printf("\nMatriz: \n");
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("[%f]", m[l][c]);
        }
        printf("\n");
    }
    
    sub = sl - sc;
    
    printf("Soma da 1ª linha: %f\n", sl);
    printf("Soma da 3ª coluna: %f\n", sc);
    printf("Subtração da 1ª linha pela 3ª coluna: %f\n", sub);
    
    return 0;
}
