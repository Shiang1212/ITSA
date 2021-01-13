#include<stdio.h>
#include <ctype.h>
int main()
{
    int sum=0;
    char input[128];
    int i=0;
    scanf("%s",input);
    while(input[i]!='\0')
    {
        input[i]=tolower(input[i]);
        sum+=input[i]-96;
        i++;
    }
    printf("%d\n",sum);
    sum=0;
}
