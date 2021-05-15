#include <stdio.h>

int main()
{
    int x,h,m,s;

    scanf("%d",&x);

    h = x / 3600;
    x = x % 3600;

    m = x / 60;
    x = x % 60;

    s = x;
    
    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
