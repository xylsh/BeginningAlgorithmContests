#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include <math.h>
//#include <time.h>
#define MAXN 100

char matrix[MAXN][MAXN];
int main(){ 

    int n,i,j;
    scanf("%d",&n);

    // 获得输入
    char c;
    for(i=0; i<n; i++){  
        for(j=0; j<n; j++){
            c = getchar();
            if( isspace(c) ){  
                j--;
                continue;
            }  
            matrix[i][j] = c;
        }
    }

    printf("\n");
    // 左旋90度输出
    for(i=n-1; i>=0; i--){
        for(j=0; j<n; j++){ 
            printf("%c ",matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
/*
 * Sample input:
 * 3
 * a b c
 * d e f
 * g h i
 * Sample output:
 * c f i 
 * b e h 
 * a d g 
 *
 */

