#include<stdio.h>
int sum(int x);//Function Declaration//
main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Sum of digits: %d",sum(n));//Function Call//
	return 0;
}
int sum(int n)//Function Definition//
{
	if(n==0)
	{
		return 0;
	}
	else
	{                                
		return(n%10 + sum(n/10));//Function calls itself(Recursion)//
	}
}
