#include <stdio.h>
#include <math.h>

int main(){  

    int n,m,i;
    double sum = 0.0;
    scanf("%d %d", &n, &m);
    
    for(i=n; i<=m; i++){
        // 必须是1.0,而不是1,否则执行的是整数运算，不是浮点数运算
        sum += 1.0/pow(i,2);
    }
    printf("%.5f\n",sum);

    return 0;
}
