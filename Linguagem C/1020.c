#include <stdio.h>

int main()
{
    int x,a,m,d;

    scanf("%d",&x);

    a = x / 365;
    x = x % 365;
    printf("%d ano(s)\n",a);

    m = x / 30;
    x = x % 30;
    printf("%d mes(es)\n",m);

    d = x;
    printf("%d dia(s)\n",d);

    return 0;
}
