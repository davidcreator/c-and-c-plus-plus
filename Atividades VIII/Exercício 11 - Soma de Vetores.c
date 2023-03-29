#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[5];

    for (int x = 0; x < 5; x++) {
        printf("\nInforme o %dº valor do Vetor 1: ", x+1);
        scanf("%d", &v1[x]);
    }
    system("cls"); // Limpa a tela do console

    for (int x = 0; x < 5; x++) {
        printf("\nInforme o %dº valor do Vetor 2: ", x+1);
        scanf("%d", &v2[x]);
        v3[x] = v1[x] + v2[x];
    }
    system("cls"); // Limpa a tela do console

    for (int x = 0; x < 5; x++) {
        printf("%d\t", v3[x]);
    }

    return 0;
}
