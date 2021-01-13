#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,count=0;
        for(i=1;i<=n;i++)
        {
            if(i%3==0)
            {
                count+=i;
            }
        }
        printf("%d\n",count);
    }
}
