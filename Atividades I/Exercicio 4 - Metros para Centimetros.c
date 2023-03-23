#include <stdio.h>

int main()
{    
    float x;

    printf("Informe a medida em metros: ");
    scanf("%f", &x);

    x = x * 100;

    printf("A medida em cm é: %.2f cm", x);

    return 0;
}
