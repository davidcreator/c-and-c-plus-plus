#include <stdio.h>

int main()
{
    float p_rep_C, p_aprov_D, n_rep_C, n_rep_D, t_rep;

    printf("Informe o percentual de alunos reprovados na turma C: ");
    scanf("%f", &p_rep_C);

    printf("Informe o percentual de alunos aprovados na turma D: ");
    scanf("%f", &p_aprov_D);

    n_rep_C = (60 * p_rep_C) / 100;

    n_rep_D = 20 - (20 * p_aprov_D) / 100;

    t_rep = (n_rep_C + n_rep_D) * 100 / 80;

    printf("O número de reprovados na turma C é: %.0f\n", n_rep_C);
    printf("O número de reprovados na turma D é: %.0f\n", n_rep_D);
    printf("A porcentagem de reprovados em relação ao total de alunos é: %.2f\n", t_rep);

    return 0;
}
