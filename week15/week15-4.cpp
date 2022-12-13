#include <stdio.h>
int main()
{
    ///printf("Hello World\n");///字串，很多字母串在一起
    char line[] = "Hello World\n";///字串的結尾，有'\0' 其實就是0

    printf("%c\n", line[0] );
    for(int i=0; i<12; i++){
        printf("=%c=", line[i] );
    }
}
