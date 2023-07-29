#include<stdio.h>
int main()
{
   int n;
   printf("Enter the value of n");
   scanf("%d",&n);
   if(n%2==0){
   if(n%7==0){
   if(n%14==0){
   printf("%d",n);
   }
   else{
   printf("%d",n*2);
   }
   }
   else{
   printf("%d",n*3);
   }
   }
   else{
   printf("%d",0);
   return 0;
   }
   }
