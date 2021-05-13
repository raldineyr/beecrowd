#include <stdio.h>

int main()
{
    double A,B,C,TRE,CI,TRA,Q,R;

    scanf("%lf %lf %lf",&A, &B, &C);

    TRE = (A*C)/2;
    CI = 3.14159*(C*C);
    TRA = ((A+B)/2)*C;
    Q = B*B;
    R = A*B;

    printf("TRIANGULO: %.3f\n",TRE);
    printf("CIRCULO: %.3f\n",CI);
    printf("TRAPEZIO: %.3f\n",TRA);
    printf("QUADRADO: %.3f\n",Q);
    printf("RETANGULO: %.3f\n",R);

    return 0;
}
