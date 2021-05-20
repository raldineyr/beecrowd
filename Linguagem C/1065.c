#include <stdio.h>

int main(){
    
    int X , I, Par = 0;
    
    for (I = 1; I <= 5; I++){
        scanf("%d",&X);
        
        if(X % 2 == 0){
            Par++;
        }
    }
    printf("%d valores pares\n",Par);
    return 0;
}
