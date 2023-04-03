#include <stdio.h>

int main() {

   char c;
 
   printf("Entre com um caractere: ");
   c = getchar();
 
   printf("Caractere inserido: ");
   putchar(c);
   
   printf("\n");

   return(0);
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - A função int getchar(void) recebe um caracter (um unsigned char) a partir de stdin, 
    isto é equivalente a fgetc com stdin como seu argumento.

    - A função int putchar(int char) escreve um caracter (um unsigned char) especificado 
    pelo argumento do tipo char para stdout.

  DECLARAÇÃO:

      int getchar(void);

      int putchar(int char);

  RETORNO:

    - Esta função getchar() retorna o caractere lido como unsigned char cast para um 
    inteiro ou EOF ao final do arquivo ou erro.

    - Esta função putchar() retorna o caractere escrito como unsigned char cast para um 
    inteiro ou EOF ao final do arquivo ou erro.

  OBSERVAÇÃO:

    - Para ler todos os caracteres do arquivo sem saber o tamanho dele usa-se o EOF = 
    End of File

    - Quando atingimos o final de um arquivo a função sempre retorna o EOF


----------------------------------------------------------------------------------------- */