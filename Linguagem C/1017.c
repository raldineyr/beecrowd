#include <stdio.h>

int main()
{
    float h, km,cl;

    scanf("%f %f",&h,&km);

    cl = (km*h)/12;
    printf("%.3f\n",cl);

    return 0;
}
