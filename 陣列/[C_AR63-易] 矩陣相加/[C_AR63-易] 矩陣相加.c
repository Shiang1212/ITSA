#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int m[a*b];
    int n[a*b];
    int sum[a*b];
    for(int i=0;i<a*b;i++)
    {
        scanf("%d",&m[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<a*b;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a*b;i++)
    {
        sum[i]=m[i]+n[i];
    }
    for(int i=0,z=0;i<a;i++)
    {
        for(int j=0;j<b;j++,z++)
        {
            printf("%d",sum[z]);
            if(j<b-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
