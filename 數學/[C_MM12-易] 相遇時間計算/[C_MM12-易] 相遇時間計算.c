#include<stdio.h>
int main()
{
    int n,j;
    while(scanf("%d",&n)!=EOF)	//連續讀入n
    {
        if(n*1000%238==0)  //整除
        {
            printf("%d\n",n*100/23.8);	//公尺轉英吋
        }
        else	//無條件進入
		{
			 j=n*100/23.8;
			 printf("%d\n",j+1);
		}
    }
}
