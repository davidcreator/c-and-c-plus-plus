#include <stdio.h>

int main()
{
    int mat_logica[10], mat_modelagem[10], soma = 0, x, y;

    printf("\nInforme as matriculas dos alunos na disciplina de Lógica de Programação\n");
    for (x = 0; x < 10; x++) {
        scanf("%d", &mat_logica[x]);
    }
    fflush(stdin);

    printf("\nInforme as matriculas dos alunos na disciplina de Modelagem de Sistemas\n");
    for (x = 0; x < 10; x++) {
        scanf("%d", &mat_modelagem[x]);
    }
    fflush(stdin);

    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            if (mat_logica[x] == mat_modelagem[y]) {
                soma++;
            }
        }
    }
    printf("A quantidade de alunos matriculados nas duas disciplinas é: %d", soma);

    return 0;
}
