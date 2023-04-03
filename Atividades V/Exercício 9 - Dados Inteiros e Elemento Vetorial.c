<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordenaVetor(int vetor[], int tamanho);
char* buscaVetor(int valorRecebido, int vetor[], int inic, int fim);

int main()
{
    int vetor[10], valor;
    char* resposta;
    
    printf("Informe um valor: ");
    scanf("%d", &valor);
    
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    
    for (int x = 0; x < 10; x++){
        vetor[x] = rand() % 20 + 1;
    }
    
    printf("\n");
    for(int x = 0; x < 10; x++){
        printf("[%d]", vetor[x]);
    }
    
    ordenaVetor(vetor, 10);
    
    printf("\n\nVETOR ORDENADO\n");
    
    for(int x = 0; x < 10; x++){
        printf("[%d]", vetor[x]);
    }
    
    resposta = buscaVetor(valor, vetor, 0, 9);
    
    printf("\n\nO valor %d %s", valor, resposta);
    
    return 0;
}

int ordenaVetor(int vetor[], int tamanho){
    int temp;
    for (int x = 0; x < tamanho-1; x++){
        for(int y = (x+1); y < tamanho; y++){
            if(vetor[y] < vetor[x]){
                temp = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = temp;
            }
        }
    }
}

char* buscaVetor(int valorRecebido, int vetor[], int inic, int fim){
    int meio;
    meio = (inic + fim) / 2;

    if (vetor[meio] == valorRecebido){
        return "foi encontrado";
    }

    if (inic >= fim){
        return "não foi encontrado";
    }

    if(vetor[meio] < valorRecebido){
        return buscaVetor(valorRecebido, vetor, meio+1, fim);
    } else {
        return buscaVetor(valorRecebido, vetor, inic, meio-1);
    }
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordenaVetor(int vetor[], int tamanho);
char* buscaVetor(int valorRecebido, int vetor[], int inic, int fim);

int main()
{
    int vetor[10], valor;
    char* resposta;
    
    printf("Informe um valor: ");
    scanf("%d", &valor);
    
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    
    for (int x = 0; x < 10; x++){
        vetor[x] = rand() % 20 + 1;
    }
    
    printf("\n");
    for(int x = 0; x < 10; x++){
        printf("[%d]", vetor[x]);
    }
    
    ordenaVetor(vetor, 10);
    
    printf("\n\nVETOR ORDENADO\n");
    
    for(int x = 0; x < 10; x++){
        printf("[%d]", vetor[x]);
    }
    
    resposta = buscaVetor(valor, vetor, 0, 9);
    
    printf("\n\nO valor %d %s", valor, resposta);
    
    return 0;
}

int ordenaVetor(int vetor[], int tamanho){
    int temp;
    for (int x = 0; x < tamanho-1; x++){
        for(int y = (x+1); y < tamanho; y++){
            if(vetor[y] < vetor[x]){
                temp = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = temp;
            }
        }
    }
}

char* buscaVetor(int valorRecebido, int vetor[], int inic, int fim){
    int meio;
    meio = (inic + fim) / 2;

    if (vetor[meio] == valorRecebido){
        return "foi encontrado";
    }

    if (inic >= fim){
        return "não foi encontrado";
    }

    if(vetor[meio] < valorRecebido){
        return buscaVetor(valorRecebido, vetor, meio+1, fim);
    } else {
        return buscaVetor(valorRecebido, vetor, inic, meio-1);
    }
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
