#include <stdio.h>
#include <string.h>

int main() {

   char str1[15];
   char str2[15];
   int resultado;

   strcpy(str1, "victor");
   strcpy(str2, "victor hugo");

   resultado = strcmp(str1, str2);

   if(resultado < 0)
      printf("str1 é menor que str2\n");
   else if(resultado > 0) 
      printf("str1 é maior que str2\n");
   else 
      printf("str1 é igual a str2\n");

   printf("Resultado: %d\n", resultado);
   
   return(0);
}

/*
DESCRIÇÃO:

   A função int strcmp(const char *str1, const char *str2) compara a string apontada, 
   por str1 com a string apontada por str2.

DECLARAÇÃO:

   - Declaração da função strcmp().

      int strcmp(const char *str1, const char *str2)

PARAMETROS:

    str1 -- Primeira string a ser comparada.

    str2 -- Segunda string a ser comparada.

RETORNO:

   - Esta função retorna os seguintes valores:

      Se o valor de retorno for menor que 0 então indica que str1 é menor que str2.

      Se o valor de retorno for maior que 0 então indica que str1 é maior que str2.

      Se o valor de retorno for igual a 0 então indica que str1 é igual a str2.

*/