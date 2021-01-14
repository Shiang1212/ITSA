#include<stdio.h>
int main()
{
    float a,b,c;
    while(scanf("%f%f%f", &a, &b, &c) != EOF)   //連續讀取a=上底,b=下底,c=高
    {
        printf("Trapezoid area:%.1lf\n",(a+b)*c/2); //(a+b)*c/2)為梯形面積公式
    }
    return 0;
}
