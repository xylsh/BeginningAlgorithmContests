#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){ 

   char c,num_str[2][12];
   int i,j;
   i = j = 0;
   char flag;   // 运算符号
   while( (c=getchar()) != -1 ){ 
       if( c==' ' )  continue;
       if( isdigit(c) ) 
           num_str[i][j++] = c;
       else if( c=='+' || c=='-' || c=='*' ){ 
           flag = c;
           num_str[i][j]='\0';
           i++; j=0;
       }
   }
   num_str[1][j] = '\0';

   int num1 = atoi(num_str[0]);
   int num2 = atoi(num_str[1]);
   int result;
   if( flag=='+' ) result = num1+num2;
   else if( flag=='-' ) result = num1-num2;
   else if( flag=='*' ) result = num1*num2;
   
   printf("%s %c %s = %d\n",num_str[0],flag,num_str[1],result);

   return 0;
}

