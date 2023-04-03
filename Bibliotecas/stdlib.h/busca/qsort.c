#include <stdio.h>
#include <stdlib.h>

int valores[] = { 88, 56, 100, 2, 25 };

int compara_numeros (const void * a, const void * b) {
   int retorno = (*(int*)a - *(int*)b);
   return retorno;
}

int main() {

   int i;

   printf("Antes de organizar a lista: \n");
   for(i=0; i<5; i++) {
      printf("%d ", valores[i]);
   }

   qsort(valores, 5, sizeof(int), compara_numeros);

   printf("\nDepois de ordenar a lista: \n");
   for(i=0; i<5; i++) { 
      printf("%d ", valores[i]);
   }
   printf("\n");
  
   return(0);
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

  - A função void qsort(void *array, size_t count, size_t size, int (*compar)(const void *, const void*))

   - Ordena o array em ordem crescente.

DECLARAÇÃO:

  void qsort(void *array, size_t count, size_t size, int (*compar)(const void *, const void*))

PARÂMETROS

    array - Este é o ponteiro para o primeiro objecto da array que será ordenado,
    estereotipado como um void*

    count - Este é o número de elementos na array apontado por array acima.

    size - Este é o tamanho em bytes de cada elemento na matriz, normalmente usa-se o
    sizeof().

    compar - Esta é a função que compara dois elementos.


RETORNO:

  - Não retorna nenhum valor, só ordena o array


----------------------------------------------------------------------------------------- */