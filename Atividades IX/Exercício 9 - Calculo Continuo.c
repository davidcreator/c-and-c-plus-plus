#include <stdio.h>

int main()
{
    int num, i;

    printf("Informe um número: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        if(i == 1) {
            printf("%d", i);
        } else if(i % 2 == 0) {
            printf("-%d", i);
        } else {
            printf("+%d", i);
        }
    }

    return 0;
}
