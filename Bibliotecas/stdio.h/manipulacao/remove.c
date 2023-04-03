#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

   int resultado;
   FILE *f;
   char filename[] = "../arquivos/rename.txt";

   f = fopen(filename, "w");

   fprintf(f, "%s", "This is tutorialspoint.com");
   fclose(f);
   
   sleep(5);

   resultado = remove(filename);

   if(resultado == 0)
      printf("File deleted successfully\n");
   else 
      printf("Error: unable to delete the file\n");
   
   return(0);
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - A função int remove(const char * filename) exclui o arquivo dado para que 
    ele não esteja mais acessível.

  DECLARAÇÃO:

    int remove(const char *filename)

  PARAMETROS:

    filename -- Esta é a string C contendo o nome do arquivo a ser deletado.

  RETORNO

    - Se for sucesso é retornado 0

    - Caso contrario é retornando -1 e a mensagem de erro.


---------------------------------------------------------------------------------------- */