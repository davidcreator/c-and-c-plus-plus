#include <stdlib.h>
#include <stdio.h>

int main(){

  FILE *f;
  int fechou;

  f = fopen("../arquivos/position.txt", "w");

  if(f == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }

  fputs("This is tutorialspoint.com", f);
  
  fseek(f, 7, SEEK_SET);
  fputs(" C Programming Language", f);
  fechou = fclose(f);

  if(fechou != 0) {
    printf("Erro no fechamento do arquivo!\n");
  }

  return 0;
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - Em geral, o acesso a um arquivo é feito quase sempre em modo sequencial. 

    - Porém, a linguagem C permite realizar operações de leitura e escrita randomica usando a função fseek()

  DECLARAÇÃO:

    int fseek(FILE *f, long numbytes, int origem);

  PARAMETROS:

    f = Ponteiro para o arquivo.

    numbytes = É o total de bytes a ser pulado a partir da origem, Se eu usar um valor negativo de bytes para pular 
               vamos voltar o arquivo e se usar um valor positivo vamos prosseguir no arquivo.

    origem = A partir de onde os numBytes serão contados, temos 3 tipos:

      SEEK_SET: valor 0, inicio do arquivo.
      SEEK_CUR: valor 1, Ponto atual do arquivo.
      SEEK_END: valor 2, Fim do arquivo.

  RETORNO

    Retorna zero em caso de sucesso.


---------------------------------------------------------------------------------------- */