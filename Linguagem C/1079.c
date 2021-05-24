#include <stdio.h>

int main()
{
 int x, i;
 double a, b, c, media;

 scanf("%d", &x);

 i = 0;
 
 while (i < x)
 {
  scanf("%lf %lf %lf", &a, &b, &c);

  media = (((2.0*a)+(3.0*b)+(5.0*c))/10);

  printf("%.1f\n", media);
  
  i++;
 }

 return 0;
}
