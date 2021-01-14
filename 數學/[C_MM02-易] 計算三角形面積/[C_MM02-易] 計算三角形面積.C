#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f%f", &a, &b)!=EOF)  //連續讀取a=底,b=高
    {
	printf("%.1lf\n",a*b/2);	//a*b/2為三角形面積公式
    }
	return 0;
}
