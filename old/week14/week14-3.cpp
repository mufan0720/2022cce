#include <stdio.h>
int a=20;
void funcA()
{
    int a=10;
    printf("funcA�̭��La:%d\n", a);
}
void funcB()
{
    int a=30;
    printf("funcB�̭��La:%d\n", a);
}
int main()
{
    printf("�b main() �ݨ쪺a�O:%d\n", a);
    funcA();
    funcB();
    printf("�b main() �ݨ쪺a�O:%d\n", a);
}
