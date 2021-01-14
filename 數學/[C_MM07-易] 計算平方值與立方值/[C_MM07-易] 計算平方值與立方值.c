#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!= EOF) //連續讀入數值
    {
        printf("%d %d %d\n",a,a*a,a*a*a);   //a,a的平方,a的立方
    }
    return 0;
}
