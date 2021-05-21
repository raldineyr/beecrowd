#include <stdio.h>

int main(){

    int X, Impar;

    scanf("%d",&X);

    Impar = 0;
    while (Impar < 6){
        if(X % 2 != 0){
            printf("%d\n",X);
            Impar++;
        }
        X++;
    }
return 0;
}
