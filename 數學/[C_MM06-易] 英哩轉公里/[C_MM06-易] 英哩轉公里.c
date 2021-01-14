#include<stdio.h>
int main()
{
    float a;
    double b;
    while(scanf("%f",&a)!=EOF)  //連續讀入a=英哩
    {
        a=a*1.6;    //轉公里
        b =(int)((a * 10) + 0.5) / 10.0;    //四捨五入到小數第一位
        printf("%.1lf\n",b);
    }
    return 0;
}
