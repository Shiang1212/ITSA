#include<stdio.h>
int main()
{
    int cnt;
    char input[20];
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++)
    {
        scanf("%s",input);
        int j=0;
        int sum=0;
        while(input[j]!='\0')
        {
            if(input[j]=='a'||input[j]=='A')
            {
                sum++;
            }
            if(input[j]=='e'||input[j]=='E')
            {
                sum++;
            }
            if(input[j]=='i'||input[j]=='I')
            {
                sum++;
            }
            if(input[j]=='o'||input[j]=='O')
            {
                sum++;
            }
            if(input[j]=='u'||input[j]=='U')
            {
                sum++;
            }
            j++;
        }
        printf("%s %d",input,sum);
    }
}
