#include <stdio.h>
#include <math.h>
#define MAX 1000

int num[MAX];
int main(){  

    int i = 0,j,k;
    while( scanf("%d",&num[i++]) == 1 )  // Linux下，用Ctrl+D结束输入
        if(i > MAX-1) break;

    int abs,tmp,num1,num2,first = 1; // first用于标记是否是第一次计算绝对值
    for(j=0; j<i; j++){  
        for(k=j+1; k<i; k++ ){
            tmp = fabs(num[j]-num[k]);
            if( first ){ 
                abs = tmp; 
                num1 = num[j]; 
                num2 = num[k];
                first = 0;
            }  
            if( tmp < abs ){
                abs = tmp;
                num1 = num[j];
                num2 = num[k];
            }
        }
    }

    printf("The closest two Numbers:%d and %d\n",num1,num2);

    return 0;
}

