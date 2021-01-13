#include<stdio.h>
int main()
{
    float a;
    double b;
    while(scanf("%f",&a)!=EOF)
    {
        a=a*1.6;
        b =(int)((a * 10) + 0.5) / 10.0;
        printf("%.1lf\n",b);
    }
    return 0;
}
