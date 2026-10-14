#include<stdio.h>
int main()
{
	int i,n,temp,org,digit,power,count=0,sum=0;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	org=n,temp=n;
	
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	temp=n;
	while(temp!=0)
	{
		digit=temp%10;
		power=1;
		for(i=1;i<=count;i++)
		{
			power=power*digit;
			
		}
		sum=sum+power;
		temp=temp/10;
	}
	if(sum==org)
	{
		printf("armstrong number : %d",org);
	}
	else
	{
		printf("not a armstrong nummber : %d",org);
	}
	return 0;

}






















