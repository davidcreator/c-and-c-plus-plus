#include <stdio.h>

int main() {

   FILE *arquivo;
   fpos_t position;

   arquivo = fopen("../arquivos/position.txt","w");
   fgetpos(arquivo, &position); // Pega a posição do arquivo
   fputs("Hello, World!", arquivo);
  
   fsetpos(arquivo, &position);
   fputs("This is going to override previous content", arquivo);
   fclose(arquivo);
   
   return(0);
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - A função int fgetpos(FILE *stream, fpos_t *position) obtém a posição do arquivo 
    atual do fluxo e grava-o na variável position.

    - A função int fsetpos(FILE *stream, const fpos_t *position) define a posição do 
    fluxo de dados para a posição de determinado arquivo.

  DECLARAÇÃO:

    int fgetpos(FILE *stream, fpos_t *position);

    int fsetpos(FILE *stream, const fpos_t *position);

  PARAMETROS:

    stream = Este é o ponteiro para um objeto de arquivo que identifica o fluxo.

    position = Este é o ponteiro para um objeto fpos_t obtido pelo fgetpos.

  RETORNO

    - Retorna zero em caso de sucesso.

    - Retorna um valor diferente caso de erro.


---------------------------------------------------------------------------------------- */