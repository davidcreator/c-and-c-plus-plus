<<<<<<< HEAD
#include <stdio.h>

int main() {
    //Este algoritmo lê dez valores numéricos inteiros e apresenta na tela o somatório dos valores.
    int cont;
    float x, soma = 0;

    for (cont = 0; cont < 10; cont++) {
        printf("Informe o número você deseja somar: \n");
        scanf("%f", &x);
        soma += x;
    }

    printf("O somatório é: %.2f", soma);

    return 0;
}
=======
#include <stdio.h>

int main() {
    //Este algoritmo lê dez valores numéricos inteiros e apresenta na tela o somatório dos valores.
    int cont;
    float x, soma = 0;

    for (cont = 0; cont < 10; cont++) {
        printf("Informe o número você deseja somar: \n");
        scanf("%f", &x);
        soma += x;
    }

    printf("O somatório é: %.2f", soma);

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
