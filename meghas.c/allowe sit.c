#include<stdio.h>
int main()
{
int noh,noa,per;
scanf("%d%d%d",&noh,&noa,&per);
per=noa/noh*100;
printf("per");
if(per>=75)
 {
  printf("allowed to sit")
 }
else
 {
  printf("not allowed to sit")
 }
return 0;
}
