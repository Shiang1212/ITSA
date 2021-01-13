#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a<=60)
        {
            float k=a;
            printf("%.1lf\n",k*b);
        }
        else if(a<=120)
        {
            float k=a;
            printf("%.1lf\n",(60*b)+((k-60)*b*1.33));
        }
        else
        {
            float k=a;
            printf("%.1lf\n",(60)*b+(60)*b*1.33+(k-120)*b*1.66);
        }
    }
}
