#include<stdio.h>
#include<string.h>
int main()
{
    int cnt;
    char str[20];
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++)
    {
        scanf("%s",str);
        for(int j=strlen(str)-1;j>=0;j--)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
