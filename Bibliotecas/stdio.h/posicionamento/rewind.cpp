#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> 

int main() {

   char str[] = "This is tutorialspoint.com";
   FILE *f;
   int ch;

   f = fopen("../arquivos/position.txt" , "w");
   fputs(str, f);
   fclose(f);

   f = fopen("../arquivos/position.txt", "r");
   
   while(1) {
      ch = fgetc(f);
      if(feof(f)){
         break;
      }
      printf("%c", ch);
   }

   rewind(f);
   printf("\n");

   while(1){
      ch = fgetc(f);
      if(feof(f)){
         break;
      }
      printf("%c", ch);
   }
   printf("\n");

   fclose(f);

   return(0);
}

/* --------------------------------- RESUMO DO CÓDIGO -----------------------------------

  DEFINIÇÃO:

    - Outra opção de movimentação dentro do arquivo é simplismente voltar ao inicio do arquivo, para fazer
    isso usamos a função rewind()

  DECLARAÇÃO:

      void rewind(FILE *f);

  OBSERVAÇÃO:

    - Para executar esse programa, execute a Aula75 primeiro.

---------------------------------------------------------------------------------------- */