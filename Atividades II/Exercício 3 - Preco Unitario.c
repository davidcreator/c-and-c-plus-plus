#include <stdio.h>

int main()
{
float valor, n_livros;

printf("Informe o número de livros comprados: ");
scanf("%f", &n_livros);

if (n_livros > 10) {
    valor = n_livros * 8;
} else {
    valor = n_livros * 12;
}

printf("O Valor total é R$ %.2f", valor);

return 0;

}