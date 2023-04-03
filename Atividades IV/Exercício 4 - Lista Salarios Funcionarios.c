<<<<<<< HEAD
#include <stdio.h>

int main()
{
    float salario[5];
    int x;

    for(x = 0; x < 5; x++){
        printf("\nInforme o %dº salário: ", x+1);
        scanf("%f", &salario[x]);

        if(salario[x] < 1500){
            salario[x] += salario[x] * 0.1;
        }
    }

    printf("\nLista de salários:");
    for(x = 0; x < 5; x++){
        printf("\n%d° salário é R$ %.2f", x+1, salario[x]);
    }

    return 0;
}
=======
#include <stdio.h>

int main()
{
    float salario[5];
    int x;

    for(x = 0; x < 5; x++){
        printf("\nInforme o %dº salário: ", x+1);
        scanf("%f", &salario[x]);

        if(salario[x] < 1500){
            salario[x] += salario[x] * 0.1;
        }
    }

    printf("\nLista de salários:");
    for(x = 0; x < 5; x++){
        printf("\n%d° salário é R$ %.2f", x+1, salario[x]);
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
