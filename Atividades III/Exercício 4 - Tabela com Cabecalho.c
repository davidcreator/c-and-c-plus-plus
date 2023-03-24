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
