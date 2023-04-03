#include <stdio.h>
#include <string.h>

void remove_line_break(char *string) {
  
  size_t size;

  size = strlen(string);

  /* remove '\n' e atualiza o tamanho */
  if (string[size - 1] == '\n'){
    string[--size] = 0;
  }
}