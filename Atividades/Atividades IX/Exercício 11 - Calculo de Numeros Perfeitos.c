<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int numero, soma = 0;
    printf("Informe um número: ");
    scanf("%d", &numero);

    for (int x = 1; x < numero; x++) {
        if (numero % x == 0) {
            soma += x;
        }
    }

    if (numero == soma) {
        printf("O número é perfeito\n");
    } else {
        printf("O número não é perfeito\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main()
{
    int numero, soma = 0;
    printf("Informe um número: ");
    scanf("%d", &numero);

    for (int x = 1; x < numero; x++) {
        if (numero % x == 0) {
            soma += x;
        }
    }

    if (numero == soma) {
        printf("O número é perfeito\n");
    } else {
        printf("O número não é perfeito\n");
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
