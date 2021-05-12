#include <stdio.h>

int main()
{
    int C1,N1,C2,N2;
    float U1,U2,V;

    scanf("%d %d %f",&C1,&N1,&U1);
    scanf("%d %d %f",&C2,&N2,&U2);

    V = (N1 * U1) + (N2 * U2);

    printf("VALOR A PAGAR: R$ %.2f\n",V);
    return 0;
}
