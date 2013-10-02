#include <stdio.h>

int main(){  

    int count = 0,first = 1;    // first标记是否是输入的第一个数
    float max,min,num,sum=0.0;
    while( scanf("%f",&num) == 1 ){  // Linux下，用Ctrl+D结束输入
        if( first ){  
            min = max = num;
            first = 0;
        }
        sum += num;
        count++;
        if( num>max ) max=num;
        if( num<min ) min=num;
    }

    printf("min=%f\nmax=%f\naverage=%f\n",min,max,sum/count);

    return 0;
}

