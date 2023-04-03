#include <stdio.h>

int main() {
    float media[10];
    int aprov = 0, reprov = 0, x;

    for (x = 0; x < 10; x++) {
        printf("\nInforme a média do %dº aluno: ", x+1);
        scanf("%f", &media[x]);

        if (media[x] >= 6) {
            aprov += 1;
        } else {
            reprov += 1;
        }
    }

    printf("\nO total de alunos aprovados é: %d", aprov);
    printf("\nO total de alunos reprovados é: %d", reprov);

    return 0;
}
