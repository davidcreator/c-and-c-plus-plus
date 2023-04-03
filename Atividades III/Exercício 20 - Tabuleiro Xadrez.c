<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int n, x, y, z=0, cont1=0, cont2=0;
    printf("\nInforme o tamanho da tabuleiro: ");
    scanf("%d", &n);
    printf("\n");

    for(x = 1; x <= n; x++){
        cont1+=1;
        if(cont1 % 2 == 0){
            printf("X");
        }else{
            printf("O");
        }
        for(y = 1; y < n; y++){
            cont2+=1;
            if(cont2 % 2 == 0){
                printf("O");
            }else{
                printf("X");
            }
        }
        if(n % 2 != 0){
            cont2--;
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main()
{
    int n, x, y, z=0, cont1=0, cont2=0;
    printf("\nInforme o tamanho da tabuleiro: ");
    scanf("%d", &n);
    printf("\n");

    for(x = 1; x <= n; x++){
        cont1+=1;
        if(cont1 % 2 == 0){
            printf("X");
        }else{
            printf("O");
        }
        for(y = 1; y < n; y++){
            cont2+=1;
            if(cont2 % 2 == 0){
                printf("O");
            }else{
                printf("X");
            }
        }
        if(n % 2 != 0){
            cont2--;
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
