#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for (int i=n; i>0; i=i/10)
	{
		int p=n%10;
		sum=(sum*10)+p;
	}
	if (sum==n)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}
	return 0;
	
}
