#include <stdio.h>
#include <string.h>

int main(){  

    char word[30];
    int count,sum;
    count = sum = 0;
    while( scanf("%s",word) == 1 ){  
        count++;
        sum += strlen(word);
    }
    float average = (float)sum/count;
    printf("average length: %f\n",average);

    return 0;
}

