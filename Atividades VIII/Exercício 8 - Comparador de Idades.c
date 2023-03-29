#include <stdio.h>

int main() {
    int idade, cont21 = 0, cont50 = 0;
    
    do {
        printf("\nInforme a idade: ");
        scanf("%d", &idade);
        if (idade <= 21) {
            cont21++;
        }
        if (idade >= 50) {
            cont50++;
        }
        if (idade < 0) {
            printf("\nIdade inválida!");
            break;
        }
        fflush(stdin);
    } while (idade > 0);
    
    fflush(stdin);
    printf("\nQuantidade menor/igual à 21: %d", cont21);
    printf("\nQuantidade maior/igual à 50: %d", cont50);

    return 0;
}
