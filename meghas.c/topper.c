#include<stdio.h>
int main()
{
int n,tm,p;
scanf("%d%d%d",&n,&tm,&p);
if(p>=60)
 {
  p=tm/500*100;
  printf("topper");
 }
else
 {
  printf("not topper");
 }
return 0;
}
