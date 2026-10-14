#include<stdio.h>
int main()
{
	int num1,num2,dividend,divisor,remainder;
	
	printf("ENTER FIRST NUMBER : ");
	scanf("%d",&num1);
	printf("ENTER SECOND NUMBER : ");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		dividend=num1;
		divisor=num2;
	}
	else
	{
		dividend=num2;
		divisor=num1;
	}
	while(divisor!=0)
	{
		remainder= dividend % divisor;
		dividend=divisor;
		divisor=remainder;
	}
	printf("GCD of %d and %d is %d",num1,num2,dividend);
	return 0;
}





















