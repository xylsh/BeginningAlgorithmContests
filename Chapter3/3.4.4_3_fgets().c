#include <stdio.h>
#include <string.h>

int my_fgets( char *buf, int n ){

    int i = 0;
    char c;
    while( i<n-1 && (c=getchar()) != '\n' && c != EOF ){
        *buf = c;
        buf++;
        i++;
    }
    *buf = '\0';
    return i;     // 返回读入的字符数
}

int main(){  

    char string[10];
    memset(string,-1,sizeof(string));
    printf("length:%d\n",my_fgets(string, 10) );

    int i;
    for(i=0; i<10; i++)
        printf("%d ",string[i]);
    printf("\nlength:%d\n",strlen(string));

    return 0;
}

