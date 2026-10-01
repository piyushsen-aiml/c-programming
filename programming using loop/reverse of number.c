#include<stdio.h>

int main()
{
	int n,digit,reverse=0;
	
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
	}
	printf("REVERSE NUMBER : %d",reverse);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}





























