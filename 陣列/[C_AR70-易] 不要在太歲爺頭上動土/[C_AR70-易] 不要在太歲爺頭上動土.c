#include<stdio.h>
int main()
{
    char a[13][8]={{"monkey"},{"rooster"},{"dog"},{"pig"},{"rat"},{"ox"},{"tiger"},{"rabbit"},{"dragon"},{"snake"},{"horse"},{"goat"}};
    int year,dif,tai;
    scanf("%d",&year);
    tai=year%12;
    if(tai>=6&&tai<=11)
    {
        dif=tai-6;
    }
    else if(tai>=0||tai<=5)
    {
        dif=tai+6;
    }
    printf("%s\n%s\n",a[tai],a[dif]);
}
