#include<stdio.h>
int main()
{
    int m,a,b,c;
    scanf("%d",&m); //m=金額
    a=m/10;     //a=10元數
    b=(m%10)/5; //b=5元數
    c=(m%10)%5; //c=1元數
    printf("NT10=%d\n",a);
    printf("NT5=%d\n",b);
    printf("NT1=%d\n",c);
    return 0;
}
