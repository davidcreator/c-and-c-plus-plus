#include <stdio.h>

int main() {
    float testada, profundidade, area;
    
    do {
        printf("Informe a testada do terreno: ");
        scanf("%f", &testada);
        printf("Informe a profundidade do terreno: ");
        scanf("%f", &profundidade);
        
        area = testada * profundidade;
        printf("Area do terreno: %.2f M²\n", area);
    } while (area > 100);
    
    return 0;
}
