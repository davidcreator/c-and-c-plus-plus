<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int costa = 0;
    char m[11][10] = {{'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','#','#','#','.','.'},
                      {'.','.','.','.','#','#','#','#','#','.'},
                      {'.','#','.','.','.','#','#','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','#','#','.'},
                      {'.','#','#','.','.','.','.','.','.','.'},
                      {'.','.','#','#','.','.','.','.','.','.'},
                      {'.','.','#','#','#','.','.','.','.','.'},
                      {'.','.','#','#','#','#','#','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'}};

    /* Laço apenas para mostrar a matriz
    for (int linha = 0; linha < 11; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%c", m[linha][coluna]);
        }
        printf("\n");
    }
    */

    for (int linha = 0; linha < 11; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            if (m[linha][coluna] == '#' && (m[linha+1][coluna]=='.' || m[linha-1][coluna]=='.' || m[linha][coluna+1]=='.' || m[linha][coluna-1]=='.')) {
                costa++;
            }
        }
    }

    printf("O valor da costa do país de Nlogônia é %d\n", costa);

    return 0;
}
=======
#include <stdio.h>

int main()
{
    int costa = 0;
    char m[11][10] = {{'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','#','#','#','.','.'},
                      {'.','.','.','.','#','#','#','#','#','.'},
                      {'.','#','.','.','.','#','#','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','#','#','.'},
                      {'.','#','#','.','.','.','.','.','.','.'},
                      {'.','.','#','#','.','.','.','.','.','.'},
                      {'.','.','#','#','#','.','.','.','.','.'},
                      {'.','.','#','#','#','#','#','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'}};

    /* Laço apenas para mostrar a matriz
    for (int linha = 0; linha < 11; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%c", m[linha][coluna]);
        }
        printf("\n");
    }
    */

    for (int linha = 0; linha < 11; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            if (m[linha][coluna] == '#' && (m[linha+1][coluna]=='.' || m[linha-1][coluna]=='.' || m[linha][coluna+1]=='.' || m[linha][coluna-1]=='.')) {
                costa++;
            }
        }
    }

    printf("O valor da costa do país de Nlogônia é %d\n", costa);

    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
