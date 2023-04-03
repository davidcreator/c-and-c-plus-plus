#include <stdio.h>

int main()
{
    float nro[10], maior = 0.0, menor = 0.0;
    int x;

    printf("\nInforme 10 valores: ");

    for(x = 0; x < 10; x++) {
        scanf("%f", &nro[x]);

        if(nro[x] < menor) {
            menor = nro[x];
        }
        if(nro[x] > maior) {
            maior = nro[x];
        }
    }

    printf("\nO maior valor é %.2f e o menor é %.2f", maior, menor);

    return 0;
}
