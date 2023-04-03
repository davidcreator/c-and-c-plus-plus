<<<<<<< HEAD
#include <stdio.h>

int main() {
    int v[10], maior, menor;
    for (int x = 0; x < 10; x++) {
        printf("\nInforme o %dº valor: ", x + 1);
        scanf("%d", &v[x]);
    }
    maior = v[0];
    menor = v[0];
    for (int x = 0; x < 10; x++) {
        printf("%d\t", v[x]);
    }
    for (int x = 0; x < 10; x++) {
        if (maior < v[x]) {
            maior = v[x];
        }
        if (menor > v[x]) {
            menor = v[x];
        }
    }
    printf("\nMaior = %d e Menor = %d", maior, menor);
    return 0;
}
=======
#include <stdio.h>

int main() {
    int v[10], maior, menor;
    for (int x = 0; x < 10; x++) {
        printf("\nInforme o %dº valor: ", x + 1);
        scanf("%d", &v[x]);
    }
    maior = v[0];
    menor = v[0];
    for (int x = 0; x < 10; x++) {
        printf("%d\t", v[x]);
    }
    for (int x = 0; x < 10; x++) {
        if (maior < v[x]) {
            maior = v[x];
        }
        if (menor > v[x]) {
            menor = v[x];
        }
    }
    printf("\nMaior = %d e Menor = %d", maior, menor);
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
