#include <stdio.h>

int main()
{
    int x, q, r;

    printf("Informe um valor: ");
    scanf("%d", &x);

    q = x/3;
    r = x%3;

    printf("\nO valor do quociente é: %d", q);
    printf("\nO valor do resto é: %d", r);

    return 0;
}
