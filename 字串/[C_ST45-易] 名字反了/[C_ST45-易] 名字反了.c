#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int cnt;
    char input[20];
    scanf("%d",&cnt);   //讀取字串數
    for(int m=0;m<cnt;m++)
    {
        char output[20]={0};
        scanf("%s",input);  //讀取字串內容
        int len=strlen(input);
        for(int i=len-1,j=0;i>=0;i--,j++)   //從字串尾端讀取回來
        {
            output[j]=input[i]; //用output[]存取迴文
        }
        output[0]=toupper(output[0]);   //首字大寫
        output[len-1]=tolower(output[len-1]);   //尾字小寫
        printf("%s\n",output);
    }
}
