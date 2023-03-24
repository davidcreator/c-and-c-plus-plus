#include <stdio.h>

int main()
{
    int x, y;

    for (x = 1; x <= 10; x++)
    {
        printf("\n\nTABUADA DA MULTIPLICAÇÃO POR %d\n", x);
        for (y = 1; y <= 10; y++)
        {
            printf("%d X %d = %d\n", x, y, x*y);
        }
    }

    for (x = 1; x <= 10; x++)
    {
        printf("\n\nTABUADA DA DIVISÃO POR %d\n", x);
        for (y = 1; y <= 10; y++)
        {
            printf("%d / %d = %d\n", y*x, x, (y*x)/x);
        }
    }

    return 0;
}
