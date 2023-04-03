<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int operacao;
    float x, y;

    printf("Informe o 1° valor: ");
    scanf("%f", &x);
    printf("Informe o 2° valor: ");
    scanf("%f", &y);
    printf("\nEscolha uma operação: ");
    printf("\n1 - Adição");
    printf("\n2 - Subtração");
    printf("\n3 - Divisão");
    printf("\n4 - Multiplicação\n");
    scanf("%d", &operacao);

    switch(operacao)
    {
        case 1:
            x += y;
            printf("A soma é %.2f", x);
            break;
        case 2:
            x -= y;
            printf("A subtração é %.2f", x);
            break;
        case 3:
            x /= y;
            printf("A divisão é %.2f", x);
            break;
        case 4:
            x *= y;
            printf("A multiplicação é %.2f", x);
            break;
        default:
            printf("Operação inválida!");
            break;
    }

    return 0;
}
=======
#include <stdio.h>

int main()
{
    int operacao;
    float x, y;

    printf("Informe o 1° valor: ");
    scanf("%f", &x);
    printf("Informe o 2° valor: ");
    scanf("%f", &y);
    printf("\nEscolha uma operação: ");
    printf("\n1 - Adição");
    printf("\n2 - Subtração");
    printf("\n3 - Divisão");
    printf("\n4 - Multiplicação\n");
    scanf("%d", &operacao);

    switch(operacao)
    {
        case 1:
            x += y;
            printf("A soma é %.2f", x);
            break;
        case 2:
            x -= y;
            printf("A subtração é %.2f", x);
            break;
        case 3:
            x /= y;
            printf("A divisão é %.2f", x);
            break;
        case 4:
            x *= y;
            printf("A multiplicação é %.2f", x);
            break;
        default:
            printf("Operação inválida!");
            break;
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
