#include<stdio.h>
int main()
{
    float a,b;
    while(scanf("%f",&a)!=EOF)
    {
        a=a*a;
        b =(int)((a * 10) + 0.5) / 10.0;
        printf("%.1lf",b);
    }
    return 0;
}
