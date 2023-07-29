#include<stdio.h>
int main()
{
 int sp,cp,p,l;
 scanf("%d%d",&sp,&cp);
 if(cp<sp)
 {
   if(cp=sp)
   {
      printf("no profit no loss");
   }
   else
   {
   p=sp-cp;
   printf("profit");
   }
 }
 else
 {
   l=cp=sp;
   printf("loss");
 }	
return 0;
}
