#include<stdio.h>
int main()
{
int sp,cp,p,l,i;
scanf("%d%d%d%d%d",&sp,&cp,&p,&l,&i);
if (cp>sp)
 {
  l=cp-sp;
  p=l*100/cp;
  printf("%d",p);
 }  
else
 {
  printf("%d",i);
 }
return 0;
 }  
