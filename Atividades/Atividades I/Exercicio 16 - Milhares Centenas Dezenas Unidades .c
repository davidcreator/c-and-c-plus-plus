#include <stdio.h>

int main()
{
    int x = 1738, resto;
    
    resto = x % 1000;
    x /= 1000;
    printf("1738 possui %d milhar(es)\n", x);
    
    x = resto;
    resto = x % 100;
    x /= 100;
    printf("1738 possui %d centena(s)\n", x);
    
    x = resto;
    resto = x % 10;
    x /= 10;
    printf("1738 possui %d dezena(s)\n", x);
    
    x = resto;
    resto = x % 1;
    x /= 1;
    printf("1738 possui %d unidade(s)\n", x);
    
    return 0;
}
