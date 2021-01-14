#include<stdio.h>
int main()
{
    int num[6]={0};
    int i=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&num[i]);    //連續讀入陣列內容
    }
    for(i=i-1;i>=0;i--)  //執行n次                      
    {
        printf("%d",num[i]);
        if(i>0)
        {
            printf(" ");    //輸出n-1次
        }
    }
    printf("\n");
}
