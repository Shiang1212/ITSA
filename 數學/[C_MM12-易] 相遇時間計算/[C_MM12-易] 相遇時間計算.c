#include<stdio.h>
int main()
{
    int n,j;
    while(scanf("%d",&n)!=EOF)
    {
        if(n*1000%238==0)
        {
            printf("%d\n",n*100/23.8);
        }
        else
		{
			 j=n*100/23.8;
			 printf("%d\n",j+1);
		}
    }
}
