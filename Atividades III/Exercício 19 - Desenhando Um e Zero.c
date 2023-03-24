#include <stdio.h>

int main()
{
    int x, y, cont1=0, cont2=0;
    for(x = 1; x <= 4; x++){
        cont2+=1;
        if(cont2==2 || cont2==3){
            printf(" ");
        }else{
            printf("*");
        }
        for(y = 1; y <= 21; y++){
            cont1+=1;
            if(cont1==4 || cont1==5 || cont1==10 || cont1==11 || cont1==16
            || cont1==17 || cont1==24 || cont1==25 || cont1==26 || cont1==28
            || cont1==29 || cont1==31 || cont1==32 || cont1==33 || cont1==36
            || cont1==37 || cont1==38 || cont1==40 || cont1==41 || cont1==45
            || cont1==46 || cont1==47 || cont1==49 || cont1==50 || cont1==52
            || cont1==53 || cont1==54 || cont1==57 || cont1==58 || cont1==59
            || cont1==61 || cont1==62 || cont1==67 || cont1==68 || cont1==73
            || cont1==74 || cont1==79 || cont1==80){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
