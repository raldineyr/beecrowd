#include <stdio.h>

int main(){
    
    int n, i;
    double x, y, result;
    
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++){
        
        scanf("%lf",&x);
        scanf("%lf",&y);
        
        result = x/y;
        
        if (y == 0) printf("divisao impossivel\n");
        else printf("%.1lf\n",result);
    }
    
    return 0;
}
