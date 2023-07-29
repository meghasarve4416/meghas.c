#include<stdio.h>
int main()
{
int h,m,e,s,c,p,tm;
scanf("%d%d%d%d%d%d%d",&h,&m,&e,&s,&c,&p,&tm);
tm=(h+m+e+s+c)/500*100;
p=tm/500*100;
printf("%d",p);
return 0;
}
