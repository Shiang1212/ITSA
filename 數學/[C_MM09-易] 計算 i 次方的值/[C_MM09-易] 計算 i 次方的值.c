#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    while(scanf("%d",&i)!=EOF)  //連續讀入i
    {
        if(i>=31)
        {
            printf("Value of more than 31\n");
            continue;
        }
        a=1<<i; //a=pow(2,i)
        printf("%d\n",a);
    }
    return 0;
}
