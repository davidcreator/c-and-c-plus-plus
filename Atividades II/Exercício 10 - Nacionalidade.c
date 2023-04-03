<<<<<<< HEAD
#include <stdio.h>

int main() {
int nacionalidade;
printf("Informe a nacionalidade do(a) cidadã(o):\n");
printf("1 - Brasileiro\n");
printf("2 - Alemão\n");
printf("3 - Inglês\n");
printf("4 - Italiano\n");
printf("5 - Espanhol\n");
printf("6 - Francês\n");
scanf("%d", &nacionalidade);

switch(nacionalidade) {
    case 1:
        printf("O idioma é o Português\n");
        break;
    case 2:
        printf("O idioma é o Alemão\n");
        break;
    case 3:
        printf("O idioma é o Inglês\n");
        break;
    case 4:
        printf("O idioma é o Italiano\n");
        break;
    case 5:
        printf("O idioma é o Espanhol\n");
        break;
    case 6:
        printf("O idioma é o Francês\n");
        break;
    default:
        printf("Não é possível verificar o idioma\n");
}
return 0;

=======
#include <stdio.h>

int main() {
int nacionalidade;
printf("Informe a nacionalidade do(a) cidadã(o):\n");
printf("1 - Brasileiro\n");
printf("2 - Alemão\n");
printf("3 - Inglês\n");
printf("4 - Italiano\n");
printf("5 - Espanhol\n");
printf("6 - Francês\n");
scanf("%d", &nacionalidade);

switch(nacionalidade) {
    case 1:
        printf("O idioma é o Português\n");
        break;
    case 2:
        printf("O idioma é o Alemão\n");
        break;
    case 3:
        printf("O idioma é o Inglês\n");
        break;
    case 4:
        printf("O idioma é o Italiano\n");
        break;
    case 5:
        printf("O idioma é o Espanhol\n");
        break;
    case 6:
        printf("O idioma é o Francês\n");
        break;
    default:
        printf("Não é possível verificar o idioma\n");
}
return 0;

>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
}