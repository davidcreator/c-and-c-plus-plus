#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorVetor(int vetor[], int tamanho);

int main()
{
    int vetor[10], maior;
    srand(time(NULL));
	
    for(int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 20 + 1;
    }
	
    printf("Vetor gerado aleatoriamente: ");
    for(int i = 0; i < 10; i++)
    {
        printf("[%d] ", vetor[i]);
    }

    maior = maiorVetor(vetor, 10);
    printf("\n\nO maior elemento do vetor é: %d", maior);

    return 0;
}

int maiorVetor(int vetor[], int tamanho)
{
    if(tamanho == 1)
    {
        return vetor[0];
    }
    else
    {
        int maior = maiorVetor(vetor, tamanho-1);	
        if(maior > vetor[tamanho-1])
        {
            return maior;
        }
        else
        {
            return vetor[tamanho-1];
        }		
    }
}
