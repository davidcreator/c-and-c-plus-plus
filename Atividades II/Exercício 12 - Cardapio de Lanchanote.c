#include <stdio.h>

int main() {
    int cod, quant;
    float valor;
    
    printf("ESCOLHA UM LANCHE\n");
    printf("+--------------------------------------+\n");
    printf("+LANCHE           + CÓDIGO  +   VALOR  +\n");
    printf("+-----------------+---------+----------+\n");
    printf("+Cachorro Quente  +   101   +   1.20   +\n");
    printf("+-----------------+---------+----------+\n");
    printf("+Bauru Simples    +   102   +   1.30   +\n");
    printf("+-----------------+---------+----------+\n");
    printf("+Bauru com Ovo    +   103   +   1.50   +\n");
    printf("+-----------------+---------+----------+\n");
    printf("+Hambúrger        +   104   +   1.20   +\n");
    printf("+-----------------+---------+----------+\n");
    printf("+Cheeseburger     +   105   +   1.30   +\n");
    printf("+-----------------+---------+----------+\n");
    printf("+Refrigerante     +   106   +   1.00   +\n");
    printf("+-----------------+---------+----------+\n");
    
    printf("Digite o código do lanche: ");
    scanf("%d", &cod);
    printf("Informe a quantidade: ");
    scanf("%d", &quant);
    
    switch (cod) {
        case 101:
            valor = quant * 1.2;
            printf("O valor do pedido é R$ %.2f", valor);
            break;
        case 102:
            valor = quant * 1.3;
            printf("O valor do pedido é R$ %.2f", valor);
            break;
        case 103:
            valor = quant * 1.5;
            printf("O valor do pedido é R$ %.2f", valor);
            break;
        case 104:
            valor = quant * 1.2;
            printf("O valor do pedido é R$ %.2f", valor);
            break;
        case 105:
            valor = quant * 1.3;
            printf("O valor do pedido é R$ %.2f", valor);
            break;
        case 106:
            valor = quant * 1.0;
            printf("O valor do pedido é R$ %.2f", valor);
            break;
        default:
            printf("Código não válido!\n");
    }
    
    return 0;
}
