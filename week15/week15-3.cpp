#include <stdio.h>
///49 就是數字'1'
///65 就是數字'A'
///97 就是數字'a'
int main()
{
    printf("A的值是 %d\n", 'A');///: A的值是65
    printf("B的值是 %d\n", 'B');///: B的值是66
    printf("C的值是 %d\n", 'C');///: C的值是67

    for( int c = 'A'; c<='Z'; c++){
        printf("%c 的值是 %d\n", c, c );
    }
}
