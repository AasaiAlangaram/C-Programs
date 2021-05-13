#include<stdio.h>
int main()
{
  char str[100];
  int len=0,i,j;
  
  printf("Enter the string:");
  scanf("%s",&str);

  while(str[len]!='\0')
    len++;
  for(i=0; i<len; i++)
  {
    if(str[i]>'0' && str[i]<'9')
    {
      int num=str[i]-'0';
      //printf("%d\n",num);
      for(j=0; j<num; j++)
      {
        printf("%c", str[i-1]);
      }
    }
  }
}