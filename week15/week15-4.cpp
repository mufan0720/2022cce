#include <stdio.h>
int main()
{
    ///printf("Hello World\n");///�r��A�ܦh�r����b�@�_
    char line[] = "Hello World\n";///�r�ꪺ�����A��'\0' ���N�O0

    printf("%c\n", line[0] );
    for(int i=0; i<12; i++){
        printf("=%c=", line[i] );
    }
}
