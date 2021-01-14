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
        input[i]=tolower(input[i]); //將字串內容換為小寫
        sum+=input[i]-96;   //ascii: a=97  >> a=1,b=2,...,z=26
        i++;
    }
    printf("%d\n",sum);
    sum=0;
}
