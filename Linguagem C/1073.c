#include <stdio.h>

int main(){

    int I, N;

    scanf("%d",&N);

    I = 1;
    while (I <= N){
        if (I % 2 == 0) printf("%d^2 = %d\n",I, I*I);
        I++;
    }
    return 0;
}
