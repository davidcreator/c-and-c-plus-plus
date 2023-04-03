#include <stdio.h>

int main() {

   FILE *f;
   int tamanho;

   f = fopen("../arquivos/position.txt", "r");
   if(f == NULL) {
      perror ("Erro ao abrir o arquivo");
      return(-1);
   }

   fseek(f, 0, SEEK_END);

   tamanho = ftell(f);
   fclose(f);

   printf("Tamanho total do arquivo file.txt = %d bytes\n", tamanho);
  
   return(0);
}