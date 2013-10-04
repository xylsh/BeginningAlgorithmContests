#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include <time.h>
#define WORD_MAX 30   // 每个数字或字母串的最大长度
#define MAX 100       // 共存放多少个数字
#define MOD 1000

char buf[MAX][WORD_MAX];       // 存放所有字符串
char num_str[MAX][WORD_MAX];   // 存放数字字符串
int num[MAX];                  // 存放所有数字

// Important : 要保证参数str必须以'\0'结尾 !
int is_integer( char* str ){
    while( *str != '\0' ){ 
        if( isalpha(*str) )
            return 0;
        else str++;
    }
    return 1;
}

int main(){ 

    char word[WORD_MAX];
    int count_buf,count_num,i;
    count_buf = count_num = i = 0;

    while( scanf("%s",word) == 1 )
        strcpy( buf[count_buf++], word);   // 把所有字符串存放在buf中

    for( i=0; i<count_buf; i++ )
        if( is_integer( buf[i] ) )
            strcpy( num_str[count_num++], buf[i] );   // 把所有数字字符串存放在num_str中

    for( i=0; i<count_num; i++ ){
        num[i] = atoi(num_str[i]);  // 转换成数字
    }
    
    int remainder = 1;   // 余数
    for( i=0; i<count_num; i++ ){
        remainder = remainder * num[i] % MOD;  // "% MOD"的原因：1.只关心最后3位;2.防止溢出
    }
    if( remainder<0 )
        remainder = -remainder;

    printf("乘积最后3位：%03d\n",remainder);
    
    return 0;
}
/*
 * Sample input:
 * 123 53 ABC 55 CVE -7 AB
 * Sample output:
 * 乘积最后3位：815
*/

