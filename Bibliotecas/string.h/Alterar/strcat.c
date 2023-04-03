#include <stdio.h>
#include <string.h>

int main() {

   char src[50], dest[50];

   strcpy(src,  "esta é a string a ser anexada");
   strcpy(dest, "Esta é a string destino, ");
   
   strcat(dest, src);

   printf("String resultante da concatenação: |%s|\n", dest);
   
   return(0);
}

/*
DESCRIÇÃO:

	- A função da biblioteca C chamada char *strcat(char *dest, const char *src) 
	anexar a string apontada por src para o final da string apontada por dest.
	
DECLARAÇÃO:

	- Declaração da função strcat ().

		char *strcat(char *dest, const char *src);

PARAMETROS:

    dest -- Este é ponteiro para a string destino, que deve conter uma string C, 
    				e deve ser grande o suficiente para conter a string resultante concatenadas.

    src -- Esta é a string que será anexada. Isto não irá sobrepor-se a string destino.

RETORNO:

	Esta função retorna um ponteiro para a string dest resultante.

*/