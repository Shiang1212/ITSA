#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int cnt;
    char input[20];
    scanf("%d",&cnt);
    for(int m=0;m<cnt;m++)
    {
        char output[20]={0};
        scanf("%s",input);
        int len=strlen(input);
        for(int i=len-1,j=0;i>=0;i--,j++)
        {
            output[j]=input[i];
        }
        output[0]=toupper(output[0]);
        output[len-1]=tolower(output[len-1]);
        printf("%s\n",output);
    }
}
