#include <stdio.h>

int main() {
    float media_con, odo_ini, odo_fim, comb_gasto, lucro_pass, lucro_liqui;

    printf("Informe o odômetro inicial: ");
    scanf("%f", &odo_ini);
    printf("\nInforme o odômetro final: ");
    scanf("%f", &odo_fim);
    printf("\nInforme a quatidade de litros de combustivel gastos: ");
    scanf("%f", &comb_gasto);
    printf("\nInforme o valor arrecadado no dia de serviço: ");
    scanf("%f", &lucro_pass);

    media_con = (odo_fim - odo_ini) / comb_gasto;

    lucro_liqui = lucro_pass - (comb_gasto * 2.50);

    printf("\nO consume médio Km/L foi: %.2f, o valor liquido arrecadado foi R$: %.2f", media_con, lucro_liqui);

    return 0;
}
