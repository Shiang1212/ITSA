#include<stdio.h>
#include<string.h>
int main()
{
    char src[100];
    char tar[100];
    scanf("%s",src);
    scanf("%s",tar);
    char *ptr = strstr(tar,src);
    if(ptr)
    {
        printf("YES\n");
    }
    if(!ptr)
    {
        printf("NO\n");
    }
}
