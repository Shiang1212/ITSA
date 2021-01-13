#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    while(scanf("%d",&i)!=EOF)
    {
        if(i>=31)
        {
            printf("Value of more than 31\n");
            continue;
        }
        a=1<<i;
        printf("%d\n",a);
    }
    return 0;
}
