#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
//#include <ctype.h>
//#include <math.h>
//#include <time.h>
//#include <assert.h>

int flag = 0;
int f(){
    return flag++;
}
int g(){  
    return flag++;
}
int h(){  
    return flag++;
}

int main(){ 
    
    int a,b;
    a = f();
    b = f();
    printf("a= %d\nb= %d\n",a,b);

    a = ( f() + g() ) + h();
    b = f() + ( g() + h() );
    printf("a= %d\nb= %d\n",a,b);
    
    return 0;
}

