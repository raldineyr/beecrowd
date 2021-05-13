#include <stdio.h>

int main()
{
    int x;
    float y, c;

    scanf("%d %f", &x, &y);

    c = x/y;

    printf("%.3f km/l\n",c);

    return 0;
}
