#include <stdio.h>

int main()
{
    int v[5], x, maior = 0, menor = 0, posicaomaior = 0, posicaomenor = 0;

    printf("\nInforme os valores do vetor: ");
    for (x = 0; x < 5; x++){
        scanf("%d", &v[x]);

        maior = v[0];
        menor = v[0];
    }

    printf("\nVetor: ");
    for (x = 0; x < 5; x++){
        printf("[%d]", v[x]);
    }

    for (x = 0; x < 5; x++){
        if (v[x] > maior){
            maior = v[x];
            posicaomaior = x;
        }
        if (v[x] < menor){
            menor = v[x];
            posicaomenor = x;
        }
    }

    printf("\n\nO maior valor é %d na posição %d", maior, posicaomaior);
    printf("\nO menor valor é %d na posição %d", menor, posicaomenor);

    return 0;
}
