#include<stdio.h>
int main()
{
 int m1,sm1,a,b,c;
 scanf("%d%d%d%d%d",&m1,&sm1,&a,&b,&c);
  if(a>b)
   {
    m1=a;
    sm1=b;
    }
    else
     {
      m1=b;
      sm1=a;
      }
       if(m1>c)
       {
        if(c>sm1)
         {
          printf("c");
          }
          else
          {
           printf("m1");
           }
           }
           else
           {
            printf("max1");
            }
 return 0;
 }           
             
            
