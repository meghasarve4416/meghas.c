#include<stdio.h>
int main()
 {
  int n,sum;
  scanf("%d%d",&n,&sum);
   for(int i=0; i<n; i++)
    {
      if(i<=n)
       {
        sum=sum+i;
        printf("%d", sum);
       }
      }
     return 0;
     }
