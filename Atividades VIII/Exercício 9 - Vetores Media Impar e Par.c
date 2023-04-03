<<<<<<< HEAD
#include <stdio.h>

int main() {
    int v[5], soma = 0, conta_Par = 0, conta_Impar = 0;
    float media;

    for(int x = 0; x < 5; x++) {
        printf("\nInforme o %dº valor: ", x+1);
        scanf("%d", &v[x]);
        soma += v[x];
        if(v[x] % 2 == 0) {
            conta_Par++;
        } else {
            conta_Impar++;
        }
    }
    media = (float)soma / 5;

    printf("\nA soma é: %d", soma);
    printf("\nA média é: %.2f", media);
    printf("\nO número de pares é: %d", conta_Par);
    printf("\nO número de ímpares é: %d", conta_Impar);

    return 0;
}
=======
#include <stdio.h>

int main() {
    int v[5], soma = 0, conta_Par = 0, conta_Impar = 0;
    float media;

    for(int x = 0; x < 5; x++) {
        printf("\nInforme o %dº valor: ", x+1);
        scanf("%d", &v[x]);
        soma += v[x];
        if(v[x] % 2 == 0) {
            conta_Par++;
        } else {
            conta_Impar++;
        }
    }
    media = (float)soma / 5;

    printf("\nA soma é: %d", soma);
    printf("\nA média é: %.2f", media);
    printf("\nO número de pares é: %d", conta_Par);
    printf("\nO número de ímpares é: %d", conta_Impar);

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
