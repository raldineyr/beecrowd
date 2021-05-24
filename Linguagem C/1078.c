#include <stdio.h>
 
int main() {
    
    int N,I,P;
    scanf("%d",&N);
    
    if (N > 2 && N < 1000){
        for(I = 1; I <= 10; I++){
            P = I * N;
            printf("%d x %d = %d\n",I,N,P);
        }
    }
    
    return 0;
}
