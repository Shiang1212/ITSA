#include<stdio.h>
int main()
{
    int cnt[26]={0};
    char input[1024]={0};
    int i=0;
    fgets(input,1024,stdin);
    while(input[i]!='\0')
    {
        if(input[i]>64&&input[i]<91)
        {
            cnt[input[i]-65]++;
        }
        else if(input[i]>96&&input[i]<123)
        {
            cnt[input[i]-97]++;
        }
        i++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%d",cnt[i]);
        if(i<25)
        {
            printf(" ");
        }
    }
    printf("\n");
}
