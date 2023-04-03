<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[10][50];
    float media[10];
    int x;

    printf("\nInforme os nomes dos alunos: ");
    for (x = 0; x < 10; x++){
        scanf("%s", nome[x]);
    }

    printf("\nInforme as médias dos alunos: ");
    for (x = 0; x < 10; x++){
        scanf("%f", &media[x]);
    }

    printf("\nAlunos com média inferior a 6: ");
    for (x = 0; x < 10; x++){
        if (media[x] < 6){
            printf("\nNome: %s - Media: %.2f", nome[x], media[x]);
        }
    }

    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[10][50];
    float media[10];
    int x;

    printf("\nInforme os nomes dos alunos: ");
    for (x = 0; x < 10; x++){
        scanf("%s", nome[x]);
    }

    printf("\nInforme as médias dos alunos: ");
    for (x = 0; x < 10; x++){
        scanf("%f", &media[x]);
    }

    printf("\nAlunos com média inferior a 6: ");
    for (x = 0; x < 10; x++){
        if (media[x] < 6){
            printf("\nNome: %s - Media: %.2f", nome[x], media[x]);
        }
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
