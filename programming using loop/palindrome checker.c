#include<stdio.h>

int main()
{
	int n,digit,original,reverse=0;
	
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);
	original=n;
	
	while(n!=0)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
	}
	printf("REVERSE NUMBER : %d",reverse);
	
	if(reverse==original)
	{
		printf("\nIT IS A PALINDROME");
	}
	else
	{
		printf("\nIT IS NOT A PALINDROME");
	}
	return 0;
	
}























