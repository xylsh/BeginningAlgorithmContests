#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
//#include <ctype.h>
//#include <math.h>
//#include <time.h>
#include <assert.h>

/*
 * 关于判断二元一次方程组的解的情况的方法，
 * 参考百度百科：
 * [二元一次方程组]http://baike.baidu.com/view/417411.htm
 */

/* 任务1 */
void solve1(float a,float b,float c,
        float d,float e,float f){ 
    assert( a/d != b/e );
}

/* 任务2 :返回0表示无解，1表示唯一解，2表示无穷多组解 */
int solve2(float a,float b,float c,
        float d,float e,float f){ 
    if( a/d == b/e && b/e != c/f )
        return 0;
    else if( a/d != b/e )
        return 1;
    else
        return 2;
}

int main(){ 
    
    //solve1(1,2,3,2,4,6);
    
    return 0;
}

