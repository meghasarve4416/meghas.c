#include<stdio.h>
int main()
{
 int n,i;
 scanf("%d%d",&n,&i);
  for(int i=0; i<n; i++){
    int j;
    scanf("%d",&j);
     if(j<=i)
   {
     printf("%d", i);
      j=j++;
     }
      else
      {
       printf("i");
        i=i--;
        }
       }
   return 0;
   }

     
      
