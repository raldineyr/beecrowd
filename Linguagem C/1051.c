#include <stdio.h>

int main(){

    double salario, imposto, diferenca;
    scanf("%lf",&salario);

    if(salario > 4500){
        imposto = 1000 * 0.08 + 1500 * 0.18;
        diferenca = salario - 4500;
        imposto += diferenca * 0.28;
        printf("R$ %.2f\n",imposto);
    }else{
        if(salario > 3000){
            imposto = 1000 *0.08;
            diferenca = salario - 3000;
            imposto += diferenca * 0.18;
            printf("R$ %.2f\n",imposto);
        }else{
            if(salario > 2000){
                diferenca = salario - 2000;
                imposto = diferenca * 0.08;
                printf("R$ %.2f\n",imposto);
                }
                else printf("Isento\n");
            }
        }

    return 0;
}
