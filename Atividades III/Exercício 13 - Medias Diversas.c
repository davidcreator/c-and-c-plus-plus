#include <stdio.h>

int main()
{
    int x, idade, homem_velho = 0, mulher_nova = 200, dados, nroM = 0, nroF = 0, nroTotal = 0;
    char sexo;
    float salario, mediaSalarioM = 0.0, mediaSalarioF = 0.0, mediaSalario = 0.0;

    printf("Deseja informar dados: [1-Sim | 0-Não] ");
    scanf("%d", &dados);

    while (dados != 0)
    {
        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("\nSexo: [M - Masculino | F - Feminino] ");
        scanf(" %c", &sexo);

        while (sexo != 'M' && sexo != 'F')
        {
            printf("\nSexo: [M - Masculino | F - Feminino] ");
            scanf(" %c", &sexo);
        }

        if (sexo == 'M' && idade > homem_velho)
        {
            homem_velho = idade;
        }

        if (sexo == 'F' && idade < mulher_nova)
        {
            mulher_nova = idade;
        }

        printf("\nInforme o salário: ");
        scanf("%f", &salario);

        nroTotal += 1;
        mediaSalario += salario;

        if (sexo == 'M')
        {
            nroM += 1;
            mediaSalarioM += salario;
        }

        if (sexo == 'F')
        {
            nroF += 1;
            mediaSalarioF += salario;
        }

        printf("\nDeseja informar dados: [1-Sim | 0-Não] ");
        scanf("%d", &dados);
    }

    printf("\nO homem mais velho tem %d anos de idade", homem_velho);

    if (mulher_nova == 200)
    {
        printf("\nIdade das mulheres não cadastradas!");
    }
    else
    {
        printf("\nA mulher mais nova tem %d anos de idade", mulher_nova);
    }

    printf("\nA media de salário dos homens é R$ %.2f", mediaSalarioM / nroM);
    printf("\nA media de salário das mulheres é R$ %.2f", mediaSalarioF / nroF);
    printf("\nA media de salário do grupo é R$ %.2f", mediaSalario / nroTotal);

    return 0;
}
