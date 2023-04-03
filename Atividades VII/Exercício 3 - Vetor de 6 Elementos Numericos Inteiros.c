#include <stdio.h>

int main() {
    int v[6], x, par = 0, impar = 0;
    
    printf("\nInforme os valores do vetor: ");
    for (x = 0; x < 6; x++) {
        scanf("%d", &v[x]);

        if (v[x] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    
    printf("\nVetor: ");
    for (x = 0; x < 6; x++) {
        printf("[%d]", v[x]);
    }
    
    printf("\nA quantidade de números pares é %d e a quantidade de números ímpares é %d", par, impar);
    
    return 0;
}
