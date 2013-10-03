#include <stdio.h>
#include <string.h>

int my_isalpha(char ch){  
    if( (ch >= 65 && ch <= 90) ||
            (ch >= 97 && ch <= 122 ) )
        return 1;
    return 0;
}

int my_isdigit_1(char ch){  
    if( ch >= 48 && ch <= 57 )
        return 1;
    return 0;
}

int my_isdigit_2(char ch){  
    switch (ch){ 
        case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8':
        case '9': case '0': 
            return 1;
        default: return 0;
    }
}


int main(){  

    printf("%d\n",my_isdigit_1('8'));
    printf("%d\n",my_isdigit_1('a'));
    printf("%d\n",my_isalpha('8'));
    printf("%d\n",my_isalpha('a'));
    
    return 0;
}

