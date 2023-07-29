#include<stdio.h>
int main()
{
 int n,i;
 scanf("%d%d",&n,&i);
  for(int i=0; i<n; i++)
   {
    if(i<=n)
    {
     printf("i");
    }
     for(int j=0; j<i; j--)
     {
      if(j>=i)
      {
       printf("j");
      }
     }
    }
   return 0;
   }
     
