#include <stdio.h>

int main()
{
    int cont, idade, altura, peso;
    float media, porc, qtde = 0.0, qtde2 = 0.0, qtde3 = 0.0, soma = 0.0;

    for (cont = 0; cont < 10; cont++) {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        printf("\nDigite a altura: ");
        scanf("%d", &altura);
        printf("\nDigite o peso: ");
        scanf("%d", &peso);

        if (idade > 50) {
            qtde++;
        }

        if (idade > 10 && idade < 20) {
            soma = soma + altura;
            qtde2++;
        }

        if (peso < 40) {
            qtde3++;
        }
    }

    media = soma / qtde2;
    porc = (qtde3 / cont) * 100;

    printf("\nA quantidade de pessoas acima de 50 anos e: %.0f", qtde);
    printf("\nA media das alturas entre as idades de 10 e 20 anos e: %.2f", media);
    printf("\nA porcentagem com peso inferior a 40 KG e: %.2f%%", porc);

    return 0;
}
