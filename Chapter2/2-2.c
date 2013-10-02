#include <stdio.h>
#include <math.h>

int main(){  

    int i,a,b,c;
    for(i=100; i<1000; i++){
        a = i/100;     // 百位
        b = i%100/10;  // 十位，也可以i/10%10
        c = i%10;      // 个位
        if( pow(a,3)+pow(b,3)+pow(c,3) == i )
            printf("%d\n",i);
    }

    return 0;
}

