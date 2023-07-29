#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
 for(int i=0; i<n; i++)
  {
    int a;
    scanf("%d",&a);
     if(i<=n)
     {
      a=a+2;
      printf("%d\n", a);
     }
    }
  return 0;
  }
  
