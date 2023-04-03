<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int cont, nro, carteira[5], quantia[5], tamanho1;
    char tamanho[10];
    float soma = 0.0, preco = 0.0, maior = 0.0, valorMulta[5];

    for(cont = 0; cont < 5; cont++)
    {
        do
        {
            printf("\nInforme o número da carteira [4 Dígitos]: ");
            scanf("%d", &carteira[cont]);
            sprintf(tamanho, "%d", carteira[cont]);
            tamanho1 = strlen(tamanho);
        } while(tamanho1 != 4);
        
        printf("\nInforme a quantia de multas: ");
        scanf("%d", &quantia[cont]);
        
        if(quantia[cont] > 0)
        {
            printf("\nInforme o valor de cada multa: ");
            scanf("%f", &preco);
            valorMulta[cont] = preco * quantia[cont];
            soma += valorMulta[cont];
        }
        else
        {
            valorMulta[cont] = 0.0;
        }

        if(cont == 0)
        {
            maior = valorMulta[cont];
            nro = cont;
        }
        else
        {
            if(maior < valorMulta[cont])
            {
                maior = valorMulta[cont];
                nro = cont;
            }
        }
    }

    for(cont = 0; cont < 5; cont++)
    {
        printf("\nDivida do motorista da carteira: %d", carteira[cont]);
        printf("\nR$ %.2f", valorMulta[cont]);
    }

    printf("\nA soma das multas é R$ %.2f", soma);
    printf("\nO número da carteira que recebeu a maior multa é: %d", carteira[nro]);

    return 0;
}
=======
#include <stdio.h>

int main()
{
    int cont, nro, carteira[5], quantia[5], tamanho1;
    char tamanho[10];
    float soma = 0.0, preco = 0.0, maior = 0.0, valorMulta[5];

    for(cont = 0; cont < 5; cont++)
    {
        do
        {
            printf("\nInforme o número da carteira [4 Dígitos]: ");
            scanf("%d", &carteira[cont]);
            sprintf(tamanho, "%d", carteira[cont]);
            tamanho1 = strlen(tamanho);
        } while(tamanho1 != 4);
        
        printf("\nInforme a quantia de multas: ");
        scanf("%d", &quantia[cont]);
        
        if(quantia[cont] > 0)
        {
            printf("\nInforme o valor de cada multa: ");
            scanf("%f", &preco);
            valorMulta[cont] = preco * quantia[cont];
            soma += valorMulta[cont];
        }
        else
        {
            valorMulta[cont] = 0.0;
        }

        if(cont == 0)
        {
            maior = valorMulta[cont];
            nro = cont;
        }
        else
        {
            if(maior < valorMulta[cont])
            {
                maior = valorMulta[cont];
                nro = cont;
            }
        }
    }

    for(cont = 0; cont < 5; cont++)
    {
        printf("\nDivida do motorista da carteira: %d", carteira[cont]);
        printf("\nR$ %.2f", valorMulta[cont]);
    }

    printf("\nA soma das multas é R$ %.2f", soma);
    printf("\nO número da carteira que recebeu a maior multa é: %d", carteira[nro]);

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
