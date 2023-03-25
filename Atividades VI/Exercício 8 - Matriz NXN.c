#include <stdio.h>

int main()
{
    float matriz[3][3], soma = 0.0;
    int x, y;

    printf("\nInforme os elementos da matriz\n");
    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            scanf("%f", &matriz[x][y]);
            if(x == y){
                soma += matriz[x][y];
            }
        }
    }
    system("cls"); //limpa a tela

    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            printf("[%.2f]", matriz[x][y]);
        }
        printf("\n");
    }
    printf("\nA soma dos elementos da diagonal principal e: %.2f", soma);

    return 0;
}
