#include <stdio.h>

int main()
{
   char N[10];
   double S,V,T;

   scanf("%s",&N);
   scanf("%lf",&S);
   scanf("%lf",&V);

   T = S+(V*0.15);

   printf("TOTAL = R$ %.2f\n",T);

    return 0;
}
