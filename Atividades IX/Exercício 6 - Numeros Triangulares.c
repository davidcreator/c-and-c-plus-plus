<<<<<<< HEAD
#include <stdio.h>

int main() {
    int num, ctt = 1, x = 1, y = 1;
    printf("Informe um Número: ");
    scanf("%d", &num);

    while (x <= num) {
        if (x <= num) {
            printf("\nNúmero Triangular: %d", x);
            printf("\nQtd nT: %d", ctt);
        }
        x = x + (y+1);
        y++;
        ctt++;
    }
    return 0;
}
=======
#include <stdio.h>

int main() {
    int num, ctt = 1, x = 1, y = 1;
    printf("Informe um Número: ");
    scanf("%d", &num);

    while (x <= num) {
        if (x <= num) {
            printf("\nNúmero Triangular: %d", x);
            printf("\nQtd nT: %d", ctt);
        }
        x = x + (y+1);
        y++;
        ctt++;
    }
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
