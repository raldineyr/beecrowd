#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, X1, X2, DELTA;

    scanf("%f %f %f", &A, &B, &C);
    DELTA = (B * B) -(4 * A * C);

    X1 = (-B + sqrt(DELTA))/(2*A);
    X2 = (-B - sqrt(DELTA))/(2*A);
    if (DELTA < 0)
    {
        printf("Impossivel calcular\n");
    }
    else if (A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
    printf("R1 = %.5f\n",X1);
    printf("R2 = %.5f\n",X2);
    }

    return 0;
}
