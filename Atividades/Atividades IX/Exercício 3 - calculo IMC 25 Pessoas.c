<<<<<<< HEAD
#include <stdio.h>

int main()
{
    float dados[4][3], prtgMenor, qtdPeso=0.0, media=0.0;
    float qtdSup50 = 0.0,somaAlt = 0.0,contAlt = 0.0;

    for(int x = 0; x < 4; x++){
        printf("Informe os dados da %dª pessoa:[idade - altura(cm) - peso]\n", x+1);
        for(int y = 0; y < 3; y++){
            scanf("%f", &dados[x][y]);
        }
        while(getchar() != '\n'); //limpa o buffer do teclado
        if(dados[x][0] > 50.0){
            qtdSup50++;
        }
        if(dados[x][0] >= 10.0 && dados[x][0] <= 20.0){
            somaAlt+=dados[x][1];
            contAlt++;
        }
        if(dados[x][2] < 40.0){
            qtdPeso++;
        }
    }
    media = somaAlt/contAlt;
    prtgMenor = (qtdPeso / 4) * 100;
    printf("Idade\tAlt\tPeso\n");
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 3; y++){
            printf("%.1f\t", dados[x][y]);
        }
        printf("\n");
    }
    printf("\nQtd idade > 50: %.0f\n", qtdSup50);
    printf("Média das alturas das idade entre 10 e 20: %.1f\n", media);
    printf("Porcentagem de pessoas com peso < 40: %.2f%%\n", prtgMenor);

    return 0;
}
=======
#include <stdio.h>

int main()
{
    float dados[4][3], prtgMenor, qtdPeso=0.0, media=0.0;
    float qtdSup50 = 0.0,somaAlt = 0.0,contAlt = 0.0;

    for(int x = 0; x < 4; x++){
        printf("Informe os dados da %dª pessoa:[idade - altura(cm) - peso]\n", x+1);
        for(int y = 0; y < 3; y++){
            scanf("%f", &dados[x][y]);
        }
        while(getchar() != '\n'); //limpa o buffer do teclado
        if(dados[x][0] > 50.0){
            qtdSup50++;
        }
        if(dados[x][0] >= 10.0 && dados[x][0] <= 20.0){
            somaAlt+=dados[x][1];
            contAlt++;
        }
        if(dados[x][2] < 40.0){
            qtdPeso++;
        }
    }
    media = somaAlt/contAlt;
    prtgMenor = (qtdPeso / 4) * 100;
    printf("Idade\tAlt\tPeso\n");
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 3; y++){
            printf("%.1f\t", dados[x][y]);
        }
        printf("\n");
    }
    printf("\nQtd idade > 50: %.0f\n", qtdSup50);
    printf("Média das alturas das idade entre 10 e 20: %.1f\n", media);
    printf("Porcentagem de pessoas com peso < 40: %.2f%%\n", prtgMenor);

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
