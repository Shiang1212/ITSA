#include<stdio.h>
int main()
{
    int cnt;
    scanf("%d",&cnt);
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF) //連續讀入a=帳號,b=密碼
    {
        if(a==123&&b==456)  //帳號=123,密碼=456
        {
            printf("9000\n");
        }
        else if(a==456&&b==789)
        {
            printf("5000\n");
        }
        else if(a==789&&b==888)
        {
            printf("6000\n");
        }
        else if(a==336&&b==558)
        {
            printf("10000\n");
        }
        else if(a==775&&b==666)
        {
            printf("12000\n");
        }
        else if(a==566&&b==221)
        {
            printf("7000\n");
        }
        else
        {
            printf("error\n");
        }
    }
}
