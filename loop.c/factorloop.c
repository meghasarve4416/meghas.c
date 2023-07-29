#include<stdio.h>
int main()
{
int i,m,n;
scanf("%d%d%d",&i,&m,&n);
 for(i=1; i<n; i++){
  if(i<=n) 
  {
   m=n*m;
   n=n-1;
   printf("*");
  }
 }
 return 0;
 }
