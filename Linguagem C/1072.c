#include <stdio.h>

int main(){

    int N, I, X;
    int IN = 0, OUT = 0;

    scanf("%d",&N);

    I = 0;
    while (I < N){
        scanf("%d",&X);
        if (X >= 10 && X <= 20){
            IN++;
        }else{
            OUT++;
        }
        I++;
    }
    printf("%d in\n",IN);
    printf("%d out\n",OUT);
return 0;
}
