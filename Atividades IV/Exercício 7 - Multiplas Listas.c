#include <stdio.h>
#include <string.h>

int main()
{
    char time[3][50], campeao[50], ultimo[50];
    float ponto[3], maior=0.0, menor = 0.0;
    int x;

    for(x = 0; x < 3; x++){
        printf("\nInforme o nome do time: ");
        scanf("%s", time[x]);
        printf("\nInforme a pontuacao: ");
        scanf("%f", &ponto[x]);
        fflush(stdin);
    }

    strcpy(campeao, time[0]);
    strcpy(ultimo, time[0]);

    for(x = 0; x < 3; x++){
        if(ponto[x] >= maior){
            maior = ponto[x];
            strcpy(campeao, time[x]);
        }
        if(ponto[x] <= menor){
            menor = ponto[x];
            strcpy(ultimo, time[x]);
        }
    }

    printf("\nCampeao: %s. Total de pontos: %.1f\n", campeao, maior);
    printf("\nUltimo: %s. Total de pontos: %.1f\n", ultimo, menor);

    return 0;
}
