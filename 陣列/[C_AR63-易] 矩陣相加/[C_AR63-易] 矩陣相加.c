#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);    //讀入陣列大小
    int m[a*b];
    int n[a*b];
    int sum[a*b];
    for(int i=0;i<a*b;i++)
    {
        scanf("%d",&m[i]);  //讀入陣列內容
    }
    scanf("%d%d",&a,&b);    //讀入陣列大小
    for(int i=0;i<a*b;i++)
    {
        scanf("%d",&n[i]);  //讀入陣列內容
    }
    for(int i=0;i<a*b;i++)
    {
        sum[i]=m[i]+n[i];   //各項加總
    }
    for(int i=0,z=0;i<a;i++)    //每a項換一行
    {
        for(int j=0;j<b;j++,z++)    //每行有b項
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
