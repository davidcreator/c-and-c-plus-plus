#include <stdio.h>

int main(){
    float valor[10], subtotal[10], quantidade[10];
    int x;
    char nome[10][50];

    for(x = 0; x < 10; x++){
        printf("\nInforme o nome do produto: ");
        scanf("%s", nome[x]);

        printf("\nInforme a quantidade do produto: ");
        scanf("%f", &quantidade[x]);

        printf("\nInforme o valor do produto: ");
        scanf("%f", &valor[x]);

        subtotal[x] = valor[x] * quantidade[x];
        fflush(stdin); //limpa o buffer do teclado
    }
    for(x = 0; x < 10; x++){
        printf("\nO subtotal do produto %s é de R$ %.2f", nome[x], subtotal[x]);     
    }
    return 0;
}
