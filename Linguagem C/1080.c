#include <stdio.h>

int main(){
    
    int i, x, xmax = 0, posicao;
    
    for (i = 1; i <= 100; ++i){
        scanf("%d", &x);
        
        if (x > xmax){
            xmax = x;
            posicao = i;
        }
    }
    printf("%d\n%d\n",xmax,posicao);
    return 0;
}
