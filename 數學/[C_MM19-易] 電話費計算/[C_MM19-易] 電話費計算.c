#include<stdio.h>
int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        if(m<=800)
        {
            double f;
            f=m*0.9;
            printf("%.1lf\n",f);
        }
        else if(m<1500)
		{
			double f;
			f=m*0.9*0.9;
			printf("%.1lf\n",f);
		}
		else
		{
			double f;
			f=m*0.9*0.79;
			printf("%.1lf\n",f);
		}
    }
}
