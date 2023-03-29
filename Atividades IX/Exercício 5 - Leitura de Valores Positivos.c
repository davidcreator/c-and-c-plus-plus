#include <stdio.h>

int main() {
    int m, n, soma, contador;

    do {
        printf("\n\nInforme um valor inteiro positivo: ");
        scanf("%d", &m);
        printf("Informe outro valor inteiro positivo: ");
        scanf("%d", &n);

        soma = 0;
        contador = m;

        while (contador <= n) {
            soma += contador;
            if (contador % 2 == 0 && m != 0 && n != 0) {
                printf("\nSoma(%d,%d) = %d", m, n, soma);
            }
            contador++;
        }

        if (m != 0 && n != 0) {
            printf("\nSoma Final(%d,%d) = %d", m, n, soma);
        }
    } while (m != 0 && n != 0);

    return 0;
}
