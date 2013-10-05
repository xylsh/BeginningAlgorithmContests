#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include <math.h>
//#include <time.h>
#define MAX 100

int main(){ 

    int b,  // 基数b。注意:题目已经规定2<=b<=10。
            // 若b>10，那么该程序将不能正确转换。
            // 改进方法参看./3-6_基数可大于10.c
        n,  // 正整数(10进制),假设输入的n在int能表示的范围之内
        count = 0,j,
        quotient,         // 商
        remainder[MAX];   // 余数
    scanf("%d %d",&b,&n);

    quotient = n;
    do{  
        remainder[count++] = quotient % b;
        quotient = quotient / b;
    }while( quotient!=0 );
    
    for(j=count-1; j>=0; j--)
        printf("%d",remainder[j]);
    printf("\n");

    return 0;
}
/*
 * Sample input:
 * 8 120
 * Sample output:
 * 170
 * 
 */

