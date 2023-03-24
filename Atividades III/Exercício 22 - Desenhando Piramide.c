#include <stdio.h>

int main()
{
    int alt, x, y=1, controle;

    printf("Digite a altura da piramide: ");
    scanf("%d", &alt);
    printf("\n");

    for (x=1; x<=alt; x++) {

        controle=y;

        while (controle>=1) {
            printf("*");
            controle--;
        }
        y += 2;

        printf("\n");
    }

    return 0;
}
