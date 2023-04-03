#include <stdio.h>

int main()
{
    int cpf[] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    int mult1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    int mult2[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    int soma = 0;
    int resto;

    if (cpf[0] == cpf[1] && cpf[1] == cpf[2] && cpf[2] == cpf[3] && cpf[3] == cpf[4] && cpf[4] == cpf[5] && cpf[5] == cpf[6] && cpf[6] == cpf[7] && cpf[7] == cpf[8] && cpf[8] == cpf[9] && cpf[9] == cpf[10]) {
        printf("CPF inválido!");
    }
    else {
        for (int i = 0; i < 9; i++) {
            soma += (cpf[i] * mult1[i]);
        }
        resto = (soma * 10) % 11;
        if (resto == 10) {
            resto = 0;
        }
        if (resto != cpf[9]) {
            printf("CPF inválido!");
        }
        else {
            soma = 0;
            for (int i = 0; i < 10; i++) {
                soma += (cpf[i] * mult2[i]);
            }
            resto = (soma * 10) % 11;
            if (resto == 10) {
                resto = 0;
            }
            if (resto != cpf[10]) {
                printf("CPF inválido!");
            }
            else {
                printf("CPF válido");
            }
        }
    }
    return 0;
}
