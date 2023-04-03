#include <stdio.h>

int calculaA_Recursivo(int X);

int main() {
    int A, B;
    printf("\nInforme o valor de A: ");
    scanf("%d", &A);
    B = calculaA_Recursivo(A);
    printf("\nA soma recursiva é: %d", B);
    return 0;
}

int calculaA_Recursivo(int X) {
    int soma;
    if (X == 0 || X == 1) {
        return X;
    } else {
        soma = X + calculaA_Recursivo(X-1);
        return soma;
    }
}
