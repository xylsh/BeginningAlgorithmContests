#include <stdio.h>

int main(){  

    long long d[] = { 10,100,1000,10000,100000,1000000,
        10000000,100000000,1000000000,10000000000 };
    int n,i;
    scanf("%d", &n);
    
    for(i=0; i<10; i++){
        if( n/d[i]==0 ){
            printf("%d\n",i+1);
            break;
        }
    }

    return 0;
}

