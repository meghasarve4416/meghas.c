#include<stdio.h>
int main()
{
  int a[]={10,18,15,36,24,50,38,49};
  int start=0,end=7;
  rever a=();
  int temp;
  while(start<end)
  { 
   int temp; 
   temp=a[start];
   a[start]=a[end];
   a[end]= temp;
   
   start++;
   end--;
  }
  return 0;
}
