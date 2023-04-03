<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10][50];
    float media[10];
    int x;

    printf("\nInforme os nomes dos alunos: ");
    for (x = 0; x < 10; x++) {
        scanf("%s", nome[x]);
    }

    printf("\nInforme as médias dos alunos: ");
    for (x = 0; x < 10; x++) {
        scanf("%f", &media[x]);
    }

    system("clear");

    for (x = 0; x < 10; x++) {
        if (media[x] < 6) {
            printf("\nNome: %s - Media: %.2f", nome[x], media[x]);
        }
    }

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10][50];
    float media[10];
    int x;

    printf("\nInforme os nomes dos alunos: ");
    for (x = 0; x < 10; x++) {
        scanf("%s", nome[x]);
    }

    printf("\nInforme as médias dos alunos: ");
    for (x = 0; x < 10; x++) {
        scanf("%f", &media[x]);
    }

    system("clear");

    for (x = 0; x < 10; x++) {
        if (media[x] < 6) {
            printf("\nNome: %s - Media: %.2f", nome[x], media[x]);
        }
    }

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
