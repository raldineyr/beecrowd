#include <stdio.h>
#define SENHA 2002

int main(){
    
    int X;
    scanf("%d",&X);
    
    while (X != SENHA){
      printf("Senha Invalida\n");
        
        scanf("%d",&X);
        
        if (X == SENHA){
          printf("Acesso Permitido\n");
       }   
    }   
    return 0;
}
