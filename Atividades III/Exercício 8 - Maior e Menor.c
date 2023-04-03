<<<<<<< HEAD
#include <stdio.h>

int main() {
    int nro, maior = 0, menor = 0, cont;
    
    for(cont = 1; cont <= 50; cont++){
        printf("\nInforme o %dº número: ", cont);
        scanf("%d", &nro);
        
        if (maior < nro){
            maior = nro;
        }
        if (menor > nro || cont == 1){
            menor = nro;
        }
    }
    
    printf("\nO maior número é: %d", maior);
    printf("\nO menor número é: %d", menor);
    
    return 0;
}
=======
#include <stdio.h>

int main() {
    int nro, maior = 0, menor = 0, cont;
    
    for(cont = 1; cont <= 50; cont++){
        printf("\nInforme o %dº número: ", cont);
        scanf("%d", &nro);
        
        if (maior < nro){
            maior = nro;
        }
        if (menor > nro || cont == 1){
            menor = nro;
        }
    }
    
    printf("\nO maior número é: %d", maior);
    printf("\nO menor número é: %d", menor);
    
    return 0;
}
>>>>>>> 0022760d633179861383ecd64ba21a7ac7149f23
