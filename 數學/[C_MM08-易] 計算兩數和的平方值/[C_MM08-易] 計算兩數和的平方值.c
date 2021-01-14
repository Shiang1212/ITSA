#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!= EOF)    //連續讀入兩數
    {
        printf("%d\n",(a+b)*(a+b)); //和,平方
    }
    return 0;
}
