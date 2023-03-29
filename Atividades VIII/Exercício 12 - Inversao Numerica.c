#include <stdio.h>

int main()
{
    int nr, extraido;

    printf("Informe um número:\n");
    scanf("%d", &nr);

    if (nr > 0) {
        do {
            extraido = nr % 10;
            printf("%d", extraido);
            nr /= 10;
        } while (nr != 0);
        printf("\n");
    } else if (nr < 0) {
        nr *= -1;
        printf("-");
        do {
            extraido = nr % 10;
            printf("%d", extraido);
            nr /= 10;
        } while (nr != 0);
        printf("\n");
    }

    return 0;
}
