#include <stdio.h>
///49 �N�O�Ʀr'1'
///65 �N�O�Ʀr'A'
///97 �N�O�Ʀr'a'
int main()
{
    printf("A���ȬO %d\n", 'A');///: A���ȬO65
    printf("B���ȬO %d\n", 'B');///: B���ȬO66
    printf("C���ȬO %d\n", 'C');///: C���ȬO67

    for( int c = 'A'; c<='Z'; c++){
        printf("%c ���ȬO %d\n", c, c );
    }
}
