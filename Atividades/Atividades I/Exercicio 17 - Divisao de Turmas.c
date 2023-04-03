#include <stdio.h>

int main()
{
    int n_alunos, turma_A, turma_B, turma_C;
    
    printf("Informe o número de alunos: ");
    scanf("%d", &n_alunos);
    
    turma_A = n_alunos / 3;
    n_alunos -= turma_A;
    
    turma_B = n_alunos / 2;
    n_alunos -= turma_B;
    
    turma_C = n_alunos;
    
    printf("\nO número de alunos na turma A é: %d", turma_A);
    printf("\nO número de alunos na turma B é: %d", turma_B);
    printf("\nO número de alunos na turma C é: %d", turma_C);
    
    return 0;
}
