#include <stdio.h>

int main() {

   int resultado;
   char oldname[] = "../arquivos/position2.txt";
   char newname[] = "../arquivos/position.txt";
   
   resultado = rename(oldname, newname);
	
   if(resultado == 0) 
      printf("Arquivo renomeado com sucesso!\n");
   else 
      printf("Error: Arquivo não encontrado\n");
   
   return(0);
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - A função int remove(const char * filename) faz com que o nome do arquivo referido 
    pelo oldname possa ser alterado para newname

  DECLARAÇÃO:

    int rename(const char *old_filename, const char *new_filename)

  PARAMETROS:

    oldname -- Esta é a string C contendo o nome do arquivo a ser renomeado e/ou movido.

    newname -- Esta é a string C que contém o novo nome para o arquivo.

  RETORNO

    - Se for sucesso é retornado 0

    - Caso contrario é retornando -1 e a mensagem de erro.


---------------------------------------------------------------------------------------- */