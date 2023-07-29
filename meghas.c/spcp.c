#include<stdio.h>
int main()
{
int sp,cp,p,a,i;
scanf("%d%d%d%d%d",&sp,&cp,&p,&a,&i);
if(sp>cp)
 {
  p=sp-cp;
  a=p*100/cp;
  printf("%d",p);
 }
else
 {
  printf("%d",i);
 }
return 0;
}
