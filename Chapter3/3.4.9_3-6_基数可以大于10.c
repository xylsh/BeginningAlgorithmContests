#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
//#include <ctype.h>
//#include <math.h>
//#include <time.h>
#define MAX 100

int main(){ 
    const char x[] = { '0','1','2','3','4','5','6','7','8','9',
        'A','B','C','D','E','F' };

    int b,  // 基数b。注意:本程序支持的基数范围为2<=b<=16。
            // 超过此范围程序将不能正确转换。
            // 如果想支持更大的基数，扩大数组x。
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

    char result[MAX];
    for(j=0; j<count; j++)
        result[j] = x[remainder[j]];
    
    for(j=count-1; j>=0; j--)
        printf("%c",result[j]);
    printf("\n");

    return 0;
}
/*
 * Sample input:
 * 8 120
 * Sample output:
 * 170
 * Sample input:
 * 16 125
 * Sample output:
 * 7D
 * 
 */

