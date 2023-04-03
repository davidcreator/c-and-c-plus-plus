#include <stdio.h>

int main() {
	float v[5];
	int qtd_negativo = 0, soma_positivo = 0;
	
	for (int x = 0; x < 5; x++) {
		printf("\nInforme o %dº valor: ", x+1);
		scanf("%f", &v[x]);
		
		if (v[x] < 0) {
			qtd_negativo++;
		}
		else {
			soma_positivo += v[x];
		}
	}
	
	printf("\nA quantidade de negativos é: %d", qtd_negativo);
	printf("\nA soma dos positivos é: %.2f", soma_positivo);
	
	return 0;
}
