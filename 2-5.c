#include <stdio.h>

int main(){  
    
    int n,m,count=0,i;
    int a[1000];
    scanf("%d",&n);

    for(i=0; i<n; i++) scanf("%d",&a[i]);

    scanf("%d",&m);

    for(i=0; i<n; i++){
        if( a[i]<m ) count++;
    }

    printf("%d\n",count);

    return 0;
}

