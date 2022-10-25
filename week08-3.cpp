#include <stdio.h>
int main()
{
    printf("�п�J 5�ӼƦr(�n�[�_��): ");

    int n;
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        sum += n;
    }
    printf("�`�M�O:%d", sum);
}
