#include <stdio.h>

int main(){  
    
    int count = 0;
    float num;
    while( scanf("%f",&num) == 1 )  // Linux下，用Ctrl+D结束输入
        count++;

    printf("%d\n",count);

    return 0;
}

