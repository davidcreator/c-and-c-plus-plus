#include <stdio.h>

int main(){
    int x, y, cont1=0;
    for(x = 1; x <= 4; x++){
        printf("*");
        for(y = 1; y <= 21; y++){
            cont1+=1;
            if(cont1==4 || cont1==5 || cont1==10 || cont1==11 || cont1==16
            || cont1==17 || cont1==22 || cont1==23 || cont1==25 || cont1==26
            || cont1==28 || cont1==29 || cont1==31 || cont1==32 || cont1==34
            || cont1==35 || cont1==37 || cont1==38 || cont1==40 || cont1==41
            || cont1==43 || cont1==44 || cont1==46 || cont1==47 || cont1==49
            || cont1==50 || cont1==52 || cont1==53 || cont1==55 || cont1==56
            || cont1==58 || cont1==59 || cont1==61 || cont1==62 || cont1==67
            || cont1==68 || cont1==73 || cont1==74 || cont1==79 || cont1==80){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
