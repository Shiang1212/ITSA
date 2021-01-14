#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n)   //最大公因數
{
    while(n != 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main()
{
    int a,b;
    int k;
    scanf("%d%d",&a,&b);  //讀入兩數
    k = gcd(a,b);
    printf("%d\n",k);
}
