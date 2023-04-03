#include <stdio.h>
#include <string.h>

int main() {
   
   char src[40];
   char dest[100];
  
   strcpy(src, "Este é o site: tutorialspoint.com");
   strncpy(dest, src, 15);

   printf("Original: %s\n", src);
   printf("Copia : %s\n", dest);
   
   return(0);
}

/*
DESCRIÇÃO:

	- A função char *strncpy(char *dest, const char *src, size_t n) Copia n caracteres da string src para dest. 

DECLARAÇÃO:

	- Declaração da função strcpy().

		char *strncpy(char *dest, const char *src, size_t n)

PARAMETROS:

    dest -- String na qual o conteudo copiado será inserido.

    src -- String na qual será copiada.

    n -- Numero de caracteres que será copiado de src.

RETORNO:

	- Retorna um ponteiro para a string destino, que receberá a copia, dest.

*/