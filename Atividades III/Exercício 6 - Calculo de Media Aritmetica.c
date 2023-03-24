#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    int cod;

    do {
        printf("Informe o Código do Aluno: ");
        scanf("%d", &cod);

        if (cod == 0) {
            break;
        }

        printf("\nInforme a 1º nota: ");
        scanf("%f", &nota1);
        printf("\nInforme a 2º nota: ");
        scanf("%f", &nota2);
        printf("\nInforme a 3º nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;
        printf("\nA média é: %.2f\n", media);

    } while (cod != 0);

    return 0;
}
