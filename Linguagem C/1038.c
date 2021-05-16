#include <stdio.h>

int main()
{
    int c, q;
    float p, t;

    scanf("%d %d", &c, &q);

    if (c == 1)
    {
        t = q * 4.00;
        printf("Total: R$ %.2f\n",t);
    }
    else if (c == 2)
    {
        t = q * 4.50;
        printf("Total: R$ %.2f\n",t);
    }
    else if (c == 3)
    {
        t = q * 5.00;
        printf ("Total: R$ %.2f\n",t);
    }
    else if (c == 4)
    {
        t = q * 2.00;
        printf ("Total: R$ %.2f\n",t);
    }
    else if (c == 5)
    {
        t = q * 1.50;
        printf("Total: R$ %.2f\n",t);
    }
  return 0;
}
