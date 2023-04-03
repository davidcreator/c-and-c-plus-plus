<<<<<<< HEAD
#include <stdio.h>

int main() {
    int x, y, n;

    printf("\nInforme a altura do triângulo: ");
    scanf("%d", &n);
    
    for(x = 1; x <= n; x++) {
        for(y = 1; y <= x; y++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int x, y, n;

    printf("\nInforme a altura do triângulo: ");
    scanf("%d", &n);
    
    for(x = 1; x <= n; x++) {
        for(y = 1; y <= x; y++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
