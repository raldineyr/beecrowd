#include <stdio.h>

int main(){
  
int i, p = 0;
double x, soma = 0, media;

for (i = 1; i <= 6; i++){
scanf("%lf",&x);

  if(x > 0.0){
  p++;
  soma = soma + x; 
  }
}
media = soma/p;
printf("%d valores positivos\n",p);
printf("%.1f\n",media);
  return 0;
}
