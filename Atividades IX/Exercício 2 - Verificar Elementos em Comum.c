#include <stdio.h>

int main() {
    int V1[10], V2[5], qtd = 0;

    for(int x = 0; x < 10; x++) {
        printf("\nInforme o %dº valor do vetor V1: ", x+1);
        scanf("%d", &V1[x]);
    }

    printf("\n");

    for(int x = 0; x < 5; x++) {
        printf("\nInforme o %dº valor do vetor V2: ", x+1);
        scanf("%d", &V2[x]);
    }

    for(int z = 0; z < 10; z++) {
        for(int y = 0; y < 5; y++) {
            if(V1[z] == V2[y]) {
                qtd++;
            }
        }
    }

    printf("A quantidade de valores iguais é: %d", qtd);

    return 0;
}
