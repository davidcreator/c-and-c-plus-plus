#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_caracteres(char* numero);

int main()
{
    char numero[100], numeroExtraido[2];
    int tamanho, n, soma = 0;
    printf("Informe um número: ");
    scanf("%s", numero);
    tamanho = strlen(numero);
    if (tamanho > 1){
        do {
            for (int x = 0; x < tamanho; x++){
                strncpy(numeroExtraido, numero + x, 1);
                n = atoi(numeroExtraido);
                soma += n;
            }
            snprintf(numero, sizeof(numero), "%d", soma);
            tamanho = strlen(numero);
            printf("O valor da soma dos termos é: %d\n", soma);
            if (tamanho > 1){
                soma = 0;
            }
        } while (tamanho > 1);
    }
    return 0;
}

int conta_caracteres(char* numero){
    return strlen(numero);
}
