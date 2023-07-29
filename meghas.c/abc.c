#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
  if(b>c)
  {
  printf("B");
  }
  else 
  {
  printf("C");
  }
  }
  else
  {
  if(a>c)
  {
  printf("A");
  }
  else
  {
  printf("C");
  }
 }
 return 0;
 }
