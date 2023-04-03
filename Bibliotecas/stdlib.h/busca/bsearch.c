#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara_inteiros (const void *a, const void *b) {
  int inteiro = (*(int*)a - *(int*)b);
  return inteiro;
}

int *procurar_numeros(int *valores, int chave) {
  int *item;

  qsort (valores, 6, sizeof(int), compara_inteiros);

  item = (int*) bsearch(&chave, valores, 6, sizeof(int), compara_inteiros);

  return item;
}

char *procurar_string(char *string, char *chave) {
  char *str;

  qsort(string, 4, 20, (int(*)(const void*,const void*)) strcmp);

  str = (char*) bsearch(chave, string, 4, 20, (int(*)(const void*,const void*)) strcmp);

  return str;
}

int main() {

  int valores_numeros[] = {50, 20, 60, 40, 10, 30};
  char valores_string[][20] = {"some","example","strings","here"};

  int chave_numero = 40;
  char chave_string[20] = "example";

  int *item = procurar_numeros(valores_numeros, chave_numero);
  char *str = procurar_string(*valores_string, chave_string);

  if (item != NULL)
    printf ("%d está no array.\n", *item);
  else
    printf ("%d não está no array.\n", chave_numero);
  
  if (str != NULL)
    printf ("%s está no array.\n", str);
  else
    printf ("%s não está no array.\n", chave_string);

  return 0;
}

/* -------------------------------- RESUMO DO CÓDIGO --------------------------------------

DEFINIÇÃO:

  - A função procura uma série de itens de objetos, o primeiro membro dos quais é apontada 
  por array, que seja igual ao membro apontedo por key. 
  
  - O tamanho de cada membro da array é especificado por tamanho.

  - O conteúdo da array deve ser classificados na ordem ascendente de acordo com a 
  função de comparação referenciado por Compar.

DECLARAÇÃO:

  void *bsearch(const void *key, const void *array, size_t count, 
  size_t size, int (*compar)(const void *, const void *));

PARÂMETROS

    key - Este é o ponteiro para o objeto que serve como chave para a pesquisa, 
    digite-escalado como um void*

    array - Este é o ponteiro para o primeiro objecto da array em que a pesquisa é 
    executada, estereotipado como um void*

    count - Este é o número de elementos na array apontado por array acima.

    size - Este é o tamanho em bytes de cada elemento na matriz, normalmente usa-se o
    sizeof().

    compar - Esta é a função que compara dois elementos.


RETORNO:

  - Esta função retorna um ponteiro para uma entrada na array que corresponde a 
  chave de pesquisa. 

  - Se a chave não for encontrado, um ponteiro NULL é retornado.


----------------------------------------------------------------------------------------- */