#include <stdio.h>

int main()
{
    double R,VOLUME,pi;
    scanf("%lf",&R);
    pi=3.14159;
    VOLUME=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3f\n",VOLUME);
    return 0;
}
