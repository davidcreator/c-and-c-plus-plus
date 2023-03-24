#include <stdio.h>

int main() {
    //Este algoritmo lê um determinado número e apresenta na tela a tabuada de multiplicação deste número.
    int cont, x, res;

    printf("Informe o número que deseja obter a tabuada da multiplicação: \n");
    scanf("%d", &x);
    printf("TABUADA DO %d\n", x);

    for (cont = 1; cont <= 10; cont++) {
        res = cont * x;
        printf("%d X %d = %d\n", cont, x, res);
    }

    return 0;
}
