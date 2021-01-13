#include<stdio.h>
int main()
{
    int m,a,b,c;
    scanf("%d",&m);
    a=m/10;
    b=(m%10)/5;
    c=(m%10)%5;
    printf("NT10=%d\n",a);
    printf("NT5=%d\n",b);
    printf("NT1=%d\n",c);
    return 0;
}
