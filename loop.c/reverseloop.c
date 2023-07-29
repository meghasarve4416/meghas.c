#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int i=n; i>0; i=i/10)
 {
  int r = i%10;
  printf("%d",r);
  }
   
 return 0;
 }
 
 
