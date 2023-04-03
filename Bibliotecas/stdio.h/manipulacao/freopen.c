#include <stdio.h>

int main() {

   FILE *arq;

   printf("Este testo é redirecionado para o terminal(stdout)\n");

   arq = freopen("../arquivos/manipulacao.txt", "w+", stdout);

   printf("Este texto é redirecionado para o arquivo manipulacao.txt\n");

   fclose(arq);
   
   return(0);
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - A função associa um novo arquivo com o dado aberto do fluxo e, 
    ao mesmo tempo fecha o arquivo antigo em sequência.

  DECLARAÇÃO:

    FILE *freopen(const char *filename, const char *mode, FILE *stream)

  PARAMETROS:

    filename -- Esta é a string C contendo o nome do arquivo a ser aberto.

    mode -- Esta é a string C contendo um modo de acesso ao arquivo.

    stream -- Este é o ponteiro para um objeto de arquivo que irá ser reaberto.

  RETORNO

    - Se o arquivo foi reaberto com êxito, a função retorna um ponteiro para um 
    objeto que identifica o fluxo.

    - Caso contrario é retornando NULL.


---------------------------------------------------------------------------------------- */