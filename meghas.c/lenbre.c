#include<stdio.h>
int main()
{
int l,b,a,p;
scanf("%d%d%d%d%d",&a,&b,&l,&b,&p);
 a=l*b;
 p=2*(l+b);
 if(a>p)
  {
   printf("area is greater");
  }
 else
  {
    printf("equal");
  }
 return 0;
}
