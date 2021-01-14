#include<stdio.h>
#include<string.h>
int main()
{
    char src[100];
    char tar[100];
    scanf("%s",src);
    scanf("%s",tar);
    char *ptr = strstr(tar,src);    //ptr存取src在tar的位置
    if(ptr)
    {
        printf("YES\n");
    }
    if(!ptr)
    {
        printf("NO\n");
    }
}
