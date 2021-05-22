#include <stdio.h>

int main(){

     int N, X, I, Par = 0, Impar = 0;

     scanf("%d",&N);

     I = 1;
     while (I <= N){

        scanf("%d",&X);
        if (X % 2 == 0 && X > 0) printf("EVEN POSITIVE\n");
        else if (X % 2 == 0 && X < 0) printf("EVEN NEGATIVE\n");
        else if (X % 2 != 0 && X > 0) printf("ODD POSITIVE\n");
        else if (X % 2 != 0 && X < 0) printf("ODD NEGATIVE\n");
        else printf("NULL\n");
        I++;
     }


    return (0);
}
