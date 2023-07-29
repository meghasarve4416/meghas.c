#include<stdio.h>
int main ()
{
 int b,p;
 scanf("%d%d",&b,&p);
  if(p>300)
   {
    printf("300");
    }
    else if(p>1600)
     {
      if(p<=3000)
      {
        b=10/100*p;
        printf("240 b");
       }
        if(p<=1600)
        {
         b=15/10*p;
         printf("100 b");
         }
          }
         
       return 0;
       }
