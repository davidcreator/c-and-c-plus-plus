#include <stdio.h>

int main()
{
float n_emp_loja, salario_min, p_cust_bic, n_bic_vendida, v_total_bic_vendida, salario_final;
float comissao, lucro_liq;

printf("Informe o número de empregados da loja: ");
scanf("%f", &n_emp_loja);
printf("\nInforme o valor do salário mínimo: ");
scanf("%f", &salario_min);
printf("\nInforme o valor de custo da cada bicicleta: ");
scanf("%f", &p_cust_bic);
printf("\nInforme o número de bicicletas vendidas: ");
scanf("%f", &n_bic_vendida);

v_total_bic_vendida = (p_cust_bic + (p_cust_bic * 0.5)) * n_bic_vendida;

comissao = p_cust_bic * 0.15 * n_bic_vendida;

salario_final = 2 * salario_min + comissao / n_emp_loja;

lucro_liq = v_total_bic_vendida - (salario_final * n_emp_loja);

printf("\nO salário final de cada funcionário é R$: %.2f", salario_final);
printf("\nO Lucro líquido da loja é: %.2f", lucro_liq);

return 0;

}