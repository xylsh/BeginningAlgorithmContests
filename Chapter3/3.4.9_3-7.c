#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
//#include <ctype.h>
//#include <math.h>
//#include <time.h>

// 计算整数n的x次方
long long my_pow(int n,int x){
    int i;
    long long result = 1;
    for(i=0; i<x; i++)
        result *= n;
    
    return result;
}

int main(){ 
    
    int b;
    long long n;
    scanf("%d %lld",&b,&n);

    long long result,a,c;
    int number,i;
    result = number = i = 0;
    while( n >= my_pow(10,i) ){  
        a = my_pow(10,i);
        c = my_pow(10,i+1);
        number = n % c / a;
        result = result + number*my_pow(b,i);
        i++;
    }

    printf("10进制：%lld\n",result);

    return 0;
}
/*
 * Sample input:
 * 8 3052
 * Sample output:
 * 1578
 * 
 */

