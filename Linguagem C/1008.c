#include <stdio.h>

int main()
{
    int N,H;
    float V,S;

    scanf("%d",&N);
    scanf("%d",&H);
    scanf("%f",&V);

    S = H*V;

    printf("NUMBER = %d\n",N);
    printf("SALARY = U$ %.2f\n",S);

    return 0;
}
