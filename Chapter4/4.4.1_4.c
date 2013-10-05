#include <stdio.h>
#include <string.h>

int * fun(){  
    int a = 9;
    return &a;
}

int main(){ 
    
    int *x = fun();
    printf("%d\n",*x);
    
    return 0;
}
