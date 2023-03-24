#include <stdio.h>

float somaVetor(float vetor[], int tamanho);
// protótipo da função somaVetor

int main()
{
    int a;
    float c, vetor[10];

    printf("\nPreencha o vetor: ");
    
    for (int x = 0; x < 10; x++) {
        scanf("%f", &vetor[x]);
    }
    
    for (int x = 0; x < 10; x++) {
        printf("[%f]", vetor[x]);
    }
    
    c = somaVetor(vetor, 10);

    printf("\nA soma dos elementos do vetor é: %f", c);

    return 0;
}

float somaVetor(float vetor[], int tamanho)
{
    if (tamanho == 1) {
        return vetor[0];
    }
    else {
        return vetor[tamanho-1] + somaVetor(vetor, tamanho-1);
    }
}
