#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    ///用"交換" 把大的換到右邊 小的就到左邊了
    if(a > b){/// a vs. b => b大
        int temp=a;
        a=b;
        b=temp;

   }
   if( b > c){/// b vs. c => c最大
        int temp=b;
        b=c;
        c=temp;
   }
   if( a > b){/// a vs. b => a, b, c放好了
        int temp=a;
        a=b;
        b=temp;

   }
   printf("%d %d %d", a, b, c);

}
