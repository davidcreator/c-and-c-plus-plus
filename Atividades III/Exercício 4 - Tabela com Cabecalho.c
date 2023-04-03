<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int cont, x, dobro, triplo;
    printf("Informe um número: \n");
    scanf("%d", &x);
    printf("VALOR \t DOBRO \t TRIPLO\n");
    for(cont = x; cont >= 1; cont--){
        dobro = cont*2;
        triplo = cont*3;
        printf("%d \t %d \t %d\n", cont, dobro, triplo);
    }
    return 0;
}
=======
#include <stdio.h>

int main()
{
    int cont, x, dobro, triplo;
    printf("Informe um número: \n");
    scanf("%d", &x);
    printf("VALOR \t DOBRO \t TRIPLO\n");
    for(cont = x; cont >= 1; cont--){
        dobro = cont*2;
        triplo = cont*3;
        printf("%d \t %d \t %d\n", cont, dobro, triplo);
    }
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
