#include<stdio.h>
int main()
{
 int n,x;
 scanf("%d%d",&n,&x);
  for(int i=0; i<n; i++)
   {
    int c=1;
    int s=1;
    int f=1;
      if(c<=n)
      {
       f=f*c;
       s=s+x*c/f;
       c=c+1;
       printf("%d",c);
      }
   }
  return 0;
  }
