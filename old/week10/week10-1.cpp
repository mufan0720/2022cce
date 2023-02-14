#include <stdio.h>
int main()
{
    ///int a[4] = { 10, 20, 30, 40 };
    int a[4]; ///沒有給值，就是亂亂的值
    for( int i=0; i<4; i++){
        printf("[%d] = %d \n", i, a[i] );

    }
}
