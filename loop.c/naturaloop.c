#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
  for(int i=1; i<n; i++)
   {
    int c;
    scanf("%d",&c);
    if(i<=n)
     {
      c=c+1;
      printf("%d",c);
     }
    }
   return 0;
   }
   
