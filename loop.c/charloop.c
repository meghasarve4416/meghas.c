#include<stdio.h>
int main()
{
 int m,n;
 scanf("%d%d",&m,&n);
 for(int i=0; i<n; i++)
 {
  
  if(i<="*")
  {
    printf("*");
  }
   for(int j=1; j<m; j++)
   {
    if(j<="*")
    {
     printf("*");
     }
    }
 }
 return 0;
 }
  
  

