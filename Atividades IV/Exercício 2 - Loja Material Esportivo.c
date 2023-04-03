<<<<<<< HEAD
#include <stdio.h>

int main()
{
    float valor[5], valor_estoque = 0.0;
    int x;

    for (x = 0; x < 5; x++){
        printf("\nInforme o %dº valor: ", x+1);
        scanf("%f", &valor[x]);

        valor_estoque += valor[x];
    }

    printf("\nO valor do estoque é de R$ %.2f", valor_estoque);

    return 0;
}
=======
#include <stdio.h>

int main()
{
    float valor[5], valor_estoque = 0.0;
    int x;

    for (x = 0; x < 5; x++){
        printf("\nInforme o %dº valor: ", x+1);
        scanf("%f", &valor[x]);

        valor_estoque += valor[x];
    }

    printf("\nO valor do estoque é de R$ %.2f", valor_estoque);

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
