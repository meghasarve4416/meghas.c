#include<stdio.h>
int main()
{
int n;
 printf("enter the value of n -");
 scanf("%d",&n);
 for (int i=n;i>0;){
 	for(int j=1;j<=i;){
 	printf("*");
 	j++;
 	}
 printf("\n");
 i--;
 }
return 0;
}

