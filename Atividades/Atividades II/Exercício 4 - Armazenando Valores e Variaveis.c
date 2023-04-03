<<<<<<< HEAD
#include <stdio.h>

int main()
{
float A, B, C;

printf("Informe o 1º valor: ");
scanf("%f", &A);

printf("Informe o 2º valor: ");
scanf("%f", &B);

printf("\nOs valores antes das trocas são A: %.2f e B: %.2f", A, B);

C = A;
A = B;
B = C;

printf("\nOs valores depois das trocas são A: %.2f e B: %.2f", A, B);

return 0;

=======
#include <stdio.h>

int main()
{
float A, B, C;

printf("Informe o 1º valor: ");
scanf("%f", &A);

printf("Informe o 2º valor: ");
scanf("%f", &B);

printf("\nOs valores antes das trocas são A: %.2f e B: %.2f", A, B);

C = A;
A = B;
B = C;

printf("\nOs valores depois das trocas são A: %.2f e B: %.2f", A, B);

return 0;

>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
}