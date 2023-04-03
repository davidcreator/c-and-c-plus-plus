<<<<<<< HEAD
#include <stdio.h>

int main() {
float prec;
int cod;

printf("Informe o preço:\n");
scanf("%f", &prec);

printf("Informe o código da região:\n");
printf("1 - Região Norte\n");
printf("2 - Região Sul\n");
printf("3 - Região Sudeste\n");
printf("4 - Região Nordeste\n");
printf("5 - Região Centro-Oeste\n");
scanf("%d", &cod);

switch(cod) {
    case 1:
        prec -= prec * 0.05;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 2:
        prec -= prec * 0.15;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 3:
        prec -= prec * 0.07;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 4:
        prec -= prec * 0.12;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 5:
        prec -= prec * 0.20;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    default:
        printf("O produto é importado\n");
}

return 0;

=======
#include <stdio.h>

int main() {
float prec;
int cod;

printf("Informe o preço:\n");
scanf("%f", &prec);

printf("Informe o código da região:\n");
printf("1 - Região Norte\n");
printf("2 - Região Sul\n");
printf("3 - Região Sudeste\n");
printf("4 - Região Nordeste\n");
printf("5 - Região Centro-Oeste\n");
scanf("%d", &cod);

switch(cod) {
    case 1:
        prec -= prec * 0.05;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 2:
        prec -= prec * 0.15;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 3:
        prec -= prec * 0.07;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 4:
        prec -= prec * 0.12;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    case 5:
        prec -= prec * 0.20;
        printf("O preço com desconto é R$ %.2f\n", prec);
        break;
    default:
        printf("O produto é importado\n");
}

return 0;

>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
}