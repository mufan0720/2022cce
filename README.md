# 2022cce
程式設計
(1)考試:九九乘法表
(2)主題:畫星星(2層迴圈)
#include <stdio.h>
int main()
{
    ///for(int i=0; i<5; i++){
    ///printf("i:%d\n", i);
    ///}
    for(int i=5; i>0; i--){
        for(int j=0; j<1; j++){
            printf("*");
        }
        printf("i:%d星星\n",i);
    }
}


#include <stdio.h>
int main()
{
    for( int i=1; i<=5; i++){
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}

(3)主題:最大公因數-暴力法
#include <stdio.h>
int main()
{
    printf("請輸入兩個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a,&b);

    int ans;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0){
            ans = i;
        }

    }
    printf("ans: %d 可約分", ans);
}

(4)主題:輾轉相除法
#include <stdio.h>
int main()
{
    int a, b, c; ///老大,老二,老三
    scanf("%d %d", &a, &b);
    while(1){
    c = a%b;
    printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
    if( c==0 ) break;
    a=b;
    b=c;
    }
    printf("答案b: %d ", b);
}

Week07
(1)請用 CodeBlocks實作 week07-1.cpp 裡面比較 int 整數 及 long long int 很長很長的整數 的差別。 long long int 可以裝比較長的整數
/// long long int
///很長 很長 的 整數
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來 %\n", n);

    long long int a=9876543210;
    printf("long long int 印出來 %lld\n", a);
}


(2)上週的最大公因數, 改用 long long int 很長很長的整數 來計算。請用 CodeBlocks 實作 week07-2.cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b );

    long long int ans;
    for(long long int i=1; i<=a; i++){
        if(a%i==0 && b%i==0 ) ans=i;
    }
    printf("最大公因數是:%lld\n", ans);
}


(3)上週教的輾轉相除法真的很強。現在改用 long long int 很長很長的整數 來計算, 請用 CodeBlocks 實作 week07-3.cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld", &a,&b);
    while(1){
        c= a % b;
        printf("a:%lld b:%lld c:lld\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("答案是: %lld\n", b );
}
(4)想要教「10進位轉2進位」之前, 我們需要學習一種「剝皮」的技巧。可以從高位數來剝, 但程式碼有點亂/不一致。老師倒過來想,從個位數來剝, 把 123456789 分別剝出 9 8 ... 1 怎麼剝呢? 就用 %10 取餘數, 便可以得到值。 n = n / 10 便能把數字慢慢變小囉。請用 CodeBlocks 實作 week07-4.cpp
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

    printf("現在的個位數:%d\n", n%10 );
    n = n/10;

}












