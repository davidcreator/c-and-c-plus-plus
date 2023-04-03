#include <stdio.h>

/* Limpa o buffer do teclado */
void clean_buffer(){ 
    int ch;
    do{
        ch = fgetc(stdin);
    }while (ch != EOF && ch != '\n');
}