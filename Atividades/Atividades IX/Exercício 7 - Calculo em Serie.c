<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main()
{
    int n, h = 1, aux = 2, aux1 = 3;
    float p = 0.0, base = -1.0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("H = %d", n);
    } else {
        while (n >= aux) {
            h += (pow(base, p + 1) * aux);
            aux = aux + 2;
            if (n >= aux1) {
                h += (pow(base, p + 1) * aux1);
                aux1 = aux1 + 2;
            }
            p++;
        }
        printf("H = %d", h);
    }
    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main()
{
    int n, h = 1, aux = 2, aux1 = 3;
    float p = 0.0, base = -1.0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("H = %d", n);
    } else {
        while (n >= aux) {
            h += (pow(base, p + 1) * aux);
            aux = aux + 2;
            if (n >= aux1) {
                h += (pow(base, p + 1) * aux1);
                aux1 = aux1 + 2;
            }
            p++;
        }
        printf("H = %d", h);
    }
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
