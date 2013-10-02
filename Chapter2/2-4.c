#include <stdio.h>

int main(){  

    int n,i,j,k;
    scanf("%d", &n);

    for(i=n; i>0; i--){
        for( k=0; k<n-i; k++ )
            printf(" ");
        for( j=1; j<=i*2-1; j++)
            printf("#");
        printf("\n");
    }

    return 0;
}
