#include <stdio.h>
#include <math.h>

int main(void) {
    int n, x;
    float s = 0.0;
    printf("Informe um número inteiro: ");
    scanf("%d", &n);
    if (n == 1) {
        s = n;
        printf("Soma = %.2f", s);
    } else {
        for (x = 1; x <= n; x++) {
            s += pow(-1.0, x - 1) * x;
            if (x == 1) {
                printf("%d", x);
            } else if (x % 2 == 0) {
                printf("-%d", x);
            } else {
                printf("+%d", x);
            }
        }
        printf("\nSoma = %.2f", s);
    }
    return 0;
}
