#include<stdio.h>
int main()
{
 int a,b,c,max,smax;
 scanf("%d%d%d%d%d",&a,&b,&c,&max,&smax);
  if(a>b)
   {
     a=max;
     b=max;
     }
    else
    { 
     b=max;
     a=smax;
     }
     if(c>max)
      {
       smax=max;
       max=c;
       printf("smax");
       }
       else if(c>smax)
       {
       printf("smax");
        }
         else
         {
          smax=c;
          printf("smax");
          }
 return 0;
 }
 
 
        

     
     
