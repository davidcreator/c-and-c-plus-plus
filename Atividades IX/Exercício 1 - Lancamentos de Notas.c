#include <stdio.h>

int main() {
    float notas[10], notasInvertidas[10], soma=0.0, media, nota;
    int qtdLidos = 0, qtdAcimaMedia = 0;

    for(int x = 0; x < 10; x++) {
        printf("Informe a %dº nota: ", x+1);
        scanf("%f", &nota);

        if(nota==-1) {
            break;
        } else {
            notas[x] = nota;
            qtdLidos++;
            soma += notas[x];
        }
    }

    media = soma/qtdLidos;

    for(int x = 0; x < qtdLidos; x++) {
        if(notas[x] > media) {
            qtdAcimaMedia++;
        }
    }

    printf("A quantidade de valores lidos foi: %d\n", qtdLidos);
    printf("Valores na ordem informados:\n");

    for(int x = 0; x < qtdLidos; x++) {
        printf("%.2f\t", notas[x]);
    }

    printf("\nValores na ordem inversa:\n");

    for(int x = qtdLidos-1; x >= 0; x--) {
        printf("%.2f\t", notas[x]);
    }

    printf("\nA soma é: %.2f\n", soma);
    printf("A média é: %.2f\n", media);
    printf("A quantidade acima da média é: %d", qtdAcimaMedia);

    return 0;
}
