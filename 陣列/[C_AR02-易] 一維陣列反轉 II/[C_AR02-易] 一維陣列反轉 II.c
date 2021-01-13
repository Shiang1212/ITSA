#include<stdio.h>
int main()
{
    int num[6]={0};
    int i=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",num[i]);
        if(i>0)
        {
            printf(" ");
        }
    }
    printf("\n");
}
