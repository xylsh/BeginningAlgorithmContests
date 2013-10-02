#include <stdio.h>

int main(){  

    int n,i;
    float sum=0.0;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += (1.0/i);  // 必须是1.0,而不是1,否则执行的是整数运算，不是浮点数运算
    }
    printf("%.3f\n",sum);

    return 0;
}

