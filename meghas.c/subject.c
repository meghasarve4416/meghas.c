#include<stdio.h>
int main()
{
 int che,phy,math,bio,comp,t;
 scanf("%d%d%d%d%d",&che,&phy,&math,&bio,&comp);
 float per;
 t=che+phy+math+bio+comp;
 per=(t/500.0)*100;
  if(per>=90)
  {
   printf("grade A");
  }
  else if(per>=80)
  {
    printf("grade B");
  }
  else if(per>=70)
  {
    printf("grade C");
  }
   else if(per>=60)
  {
    printf("grade D"); 
  }
   else 
  {
    printf("grade E");
  }
   
   return 0;
   }
 
