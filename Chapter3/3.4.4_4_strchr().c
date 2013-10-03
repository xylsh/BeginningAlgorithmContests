#include <stdio.h>
#include <string.h>

// 找出str指向的字符串中第一次出现字符ch的位置
// 返回指向该位置的指针，找不到则返回NULL
char * my_strchr( char *str, char ch){
    while(*str != '\0'){
        if( *str == ch ){
            return str;
        }
        str++;
    }
    return NULL;
}

int main(){  

    char string[] = "abcdefg";
    char *pc = my_strchr(string,'f');
    if( pc != NULL ){
        printf("%c\n",*pc);
    }else{  
        printf("not found\n");
    }
    
    return 0;
}

