#include <stdio.h>

int main()
{
float comb_abast, dist_perc, dist_max;

printf("Informe a quantidade de combustivel abastacido: ");
scanf("%f", &comb_abast);

printf("Informe a distância percorrida por litro de combustível: ");
scanf("%f", &dist_perc);

dist_max = comb_abast * dist_perc;

printf("A distância máxima percorrida é %.2f KM", dist_max);

return 0;

}