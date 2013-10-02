#include <stdio.h>

int main(){  

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
   
    int i,x;
    for(i=1; ; i++){
        x = 7*i+c;
        if( x>100 ){  
            printf("No answer\n");
            break;
        }  
        if( x >= 10 && x%3 == a && x%5 == b ){  
            printf("%d\n",x);
            break;
        }
    }

    return 0;
}

