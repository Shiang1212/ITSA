#include<stdio.h>
#include<string.h>
int main()
{
  int i,l,j;
  char input[1000];
  while(scanf("%s",input)!=EOF)
  {
      char rev[1000]={0};
      l=strlen(input);
      for(i=l-1,j=0;i>=0;i--,j++)
      {
          rev[j]=input[i];
      }
    if(strcmp(input,rev)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
  }
}
