#include<stdio.h>

int main(){
    int i,x;
    int vetor[10000];
    int p=0;
    scanf("%d", &x);    
    if (x < 10000){
        for (i=1;i<= 10000;i++){
            if (i%x==2){
                vetor[p]=i;
                p++;
            }
        }
        for (i=0;i<p;i++){
            printf("%d\n",vetor[i]);
        }
    }    
    return 0;
}
