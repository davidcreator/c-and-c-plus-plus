#include <stdio.h>

int main()
{
float publico, renda, pop, ge, arq, cad;

printf("Informe o público do jogo: ");
scanf("%f", &publico);

pop = publico * 0.1;
ge = publico * 0.5;
arq = publico * 0.3;
cad = publico * 0.1;

renda = (pop * 5) + (ge * 10) + (arq * 20) + (cad * 30);

printf("O valor da renda total é R$ %.2f", renda);

return 0;

}