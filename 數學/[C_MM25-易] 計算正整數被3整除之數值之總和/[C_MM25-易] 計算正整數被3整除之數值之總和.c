#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)  //連續讀入
    {
        int i,count=0;
        for(i=1;i<=n;i++)
        {
            if(i%3==0)  //若能被整除，sum連續加成
            {
                count+=i;
            }
        }
        printf("%d\n",count);
    }
}
