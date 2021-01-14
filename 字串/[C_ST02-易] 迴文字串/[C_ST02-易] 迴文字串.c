#include<stdio.h>
#include<string.h>
int main()
{
    int cnt;
    char str[20];
    scanf("%d",&cnt);   //輸入字串數
    for(int i=0;i<cnt;i++)
    {
        scanf("%s",str);    //輸入字串內容
        for(int j=strlen(str)-1;j>=0;j--)   //從字串尾端讀回來
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
