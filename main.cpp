#include <stdio.h>
#include <string.h>

int main()
{
  char s1[1000],s2[1000];
  int i,j;

  printf("enter string1:");
  get(s1);
  printf("enter string2:");
  gets(s2);
  j=strlen(s1);

  for(i=0;s2[i]!='\0';i++)
    {
      s1[i+j]=s2[i];
    }
  s1[i+j]='\0';

  printf("combined two strings='%'\n",s1);
}
