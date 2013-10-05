#include <stdio.h>
#include <string.h>

/*
 * 局部变量可以和全局变量重名，实际上使用的是局部变量
 */
int flag = 0;

int main(){ 
    
    int flag = 1;
    printf("%d\n",flag);
    
    return 0;
}

