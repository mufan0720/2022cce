///�Ʋ�:����ܼƪ��ŧi int a; a�O��ƪ��Ϊ�
///�Ʋ�:�禡���ŧi(�������Ϊ�)
/// int sum( int a, int b); �ŧi���Ϊ�

#include <stdio.h>
int sum( int a, int b);///���ŧi declare

int main()
{///�b�Τ��e, �n���ŧi declare �� �w�q define
    int ans = sum(2, 3); ///�ϥ� �I�s
    printf("ans: %d\n", ans);
}
int sum( int a, int b) ///�w�q define
{
    return a + b;
}///�^�� �^�_�H�a
