#include<stdio.h>
int main()
{
int quanti,cost;
scanf("%d%d",&quanti,&cost);
if(quanti*100>1000)
 {
  cost=(quanti*100)-(0.1*quanti*100);
  printf("cost");
 }
else
 {
  cost=quanti*100;
  printf("cost");
 }
return 0;
}
