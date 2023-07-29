#include<stdio.h>
int main()
{
 int a=5,n;
 scanf("%d%d",&a,&n);
  for(int i=1; i<n; i++)
  {
  int j=1;
    if(i<=5)
    {
     if(j<=i)
     {
      printf("%d\n",i);
     }
    }
   }
 return 0;
 }
