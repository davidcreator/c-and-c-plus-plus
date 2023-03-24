#include <stdio.h>

int main()
{
    int liminferior, limsuperior, x;
    float soma = 0.0;

    printf("Informe o valor do limite inferior: ");
    scanf("%d", &liminferior);

    printf("Informe o valor do limite superior: ");
    scanf("%d", &limsuperior);

    // verifica se o limite inferior digitado é par
    if (liminferior % 2 == 0) {
        // se for par, soma 2 para começar com o próximo número par 
        liminferior += 2;
    }
    else {
        // se não for par, aumenta 1 para ele ficar par 
        liminferior += 1;
    }

    printf("\n\n");

    // no limite superior, subtrair 1 para ficar sempre com um número menor que o limite superior digitado.
    for (x = liminferior; x <= limsuperior - 1; x += 2) {
        printf("\t%d", x);
        soma += x;
    }

    printf("\n\n");
    printf("Somatório: %.2f", soma);
    printf("\n\n");

    return 0;
}
