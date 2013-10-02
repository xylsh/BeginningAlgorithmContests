#include <stdio.h>

int main(){  

    int num,max,secmax;

    scanf("%d %d",&max,&secmax);
    if(secmax > max){ int tmp = max; max = secmax; secmax = tmp; }

    while( scanf("%d",&num) == 1 ){
        if( num > max ) max = num;
        else if( num > secmax ) secmax = num;
    }

    printf("第二大的数:%d\n",secmax);

    return 0;
}

