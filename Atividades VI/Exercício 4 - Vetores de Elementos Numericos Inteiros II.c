#include <stdio.h>

int main()
{
    int v[15], x, maiores10 = 0;

    printf("\nInforme os valores do vetor: ");
    for(x = 0; x < 15; x++) {
        scanf("%d", &v[x]);

        if(v[x] > 10) {
            maiores10++;
        }
    }

    printf("\nVetor: ");
    for(x = 0; x < 15; x++) {
        printf("[%d]", v[x]);
    }

    printf("\n\nA quantidade de números maiores que dez é %d\n", maiores10);
    printf("\nVetor de Maiores que 10: ");
    for(x = 0; x < 15; x++) {
        if(v[x] > 10) {
            printf("[%d]\t", v[x]);
        }
    }

    return 0;
}
