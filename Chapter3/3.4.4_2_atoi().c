#include <stdio.h>
#include <string.h>
/* 
 * 通常情况下,int是32位的,所以int表示的10进制数的绝对值最多有10位，
 * 再加上输入可能有正负号，
 * 末尾有换行符，和fgets()加的'\0'
 * 所以声明数组长度为13。
 */
#define MAX 13  // 数组num_char的大小

/*
 * 题目已经假设：输入保证读入的整数能够保存在int中。
 * 所以保存结果的num_int才可以声明为int类型。
 * 否则，如果用户输入的数字大于int最大值，就需要扩大
 * num_int的类型（同时还要扩大字符数组num_char的大小）。
 *
 * 注意：32位机器上，int 和 long int 均为4个字节。
 */

// ASCII to Integer
int atoi(const char *num_char){

    int i,negative,num_int;      // negative标志是否为负数
    i = negative = num_int = 0;
    if( num_char[0] == '+' ){ i = 1; }
    if( num_char[0] == '-' ){ i = 1; negative = 1;  }

    for( ; num_char[i] != 10 ; i++)
        num_int = num_int*10 + (num_char[i] - 48);   // ASCII码中,十进制的48表示'0'

    return negative ? -num_int : num_int;
}

int main(){  

    char num_char[MAX];
    memset(num_char,0,sizeof(num_char));
    fgets(num_char,MAX,stdin);  // fgets()会读入换行符并在末尾加'\0'

    printf("convert:%d\n",atoi(num_char));

    /*
    int i;
    for(i=0; i<MAX; i++){
        printf("%d ",num_char[i]);
    }
    printf("\nlength:%d\n",strlen(num_char));*/

    return 0;
}

