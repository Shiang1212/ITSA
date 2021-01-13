#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[2];
    int sum=0;
    int i=0;
    while(i<5)
    {
        scanf("%s",input);
        if(strcmp(input,"A")==0)
        {
            sum+=14;
        }
        if(strcmp(input,"K")==0)
        {
            sum+=13;
        }
        if(strcmp(input,"Q")==0)
        {
            sum+=12;
        }
        if(strcmp(input,"J")==0)
        {
            sum+=11;
        }
        else
        {
            sum+=atoi(input);
        }
        i++;
    }
    printf("%d\n",sum);
}
