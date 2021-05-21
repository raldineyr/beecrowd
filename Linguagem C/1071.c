#include <stdio.h>

int main() {
  
 int cont,num1,num2,temp,soma;
  
    while(scanf("%d%d",&num1,&num2)==2){
      
        soma=0;
      
        if(num1>num2){
            temp=num1;
            num1=num2;
            num2=temp;
        }
        if(num1%2!=0){
        for(cont=num1+2;cont<num2;cont++){
            if(cont%2!=0)
                soma+=cont;
            }
        }
        else{
            for(cont=num1+1;cont<num2;cont++){
            if(cont%2!=0)
                soma+=cont;
            }
        }
        printf("%d\n",soma);
    }
    return 0;
}
