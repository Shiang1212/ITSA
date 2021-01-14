#include<stdio.h>
int main()
{
    float a,b;
    while(scanf("%f",&a)!=EOF)  //連續讀入a=正方形邊長
    {
        a=a*a;
        b =(int)((a * 10) + 0.5) / 10.0;    //四捨五入到小數第一位
        printf("%.1lf",b);
    }
    return 0;
}
