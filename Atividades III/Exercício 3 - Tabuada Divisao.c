#include <stdio.h>

int main() {
    //Este algoritmo lê um determinado número e apresenta na tela a tabuada da divisão deste número.
    int cont, x, res;

    printf("Informe o número que deseja obter a tabuada da divisão: \n");
    scanf("%d", &x);
    printf("TABUADA DO %d\n", x);

    for (cont = x; cont <= 10 * x; cont += x) {
        res = cont / x;
        printf("%d / %d = %d\n", cont, x, res);
    }

    return 0;
}
