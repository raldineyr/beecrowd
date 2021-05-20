#include <stdio.h>
 
int main() {
 
    int vetor[6];
    int soma = 0;
    int i;
    scanf("%d %d %d %d %d %d",&vetor[0],&vetor[1],&vetor[2],&vetor[3],&vetor[4],&vetor[5]);
    
    for(i=0;i<6;i++){
        if(vetor[i]>0){
            soma++;
        }
    }
    
    printf("%d valores positivos\n", soma);
    
    return 0;
}
