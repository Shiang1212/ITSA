#include<stdio.h>
#include<string.h>
int main()
{
  int i,l,j;
  char input[1000];
  while(scanf("%s",input)!=EOF) //連續輸入字串內容
  {
      char rev[1000]={0};
      l=strlen(input);
      for(i=l-1,j=0;i>=0;i--,j++) //從後面讀取回來
      {
          rev[j]=input[i];  //用rev[]存取迴文
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
