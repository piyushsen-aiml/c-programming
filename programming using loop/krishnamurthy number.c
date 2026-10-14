#include<stdio.h>
int main()
{
	int i,n,x,fact,sum=0,org;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	org=n;
	
	while(n!=0)
	{
		x=n%10;
		fact=1;
		for(i=1;i<=x;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
		
	}
	if(sum==org)
	{
		printf("krishnamurthy number : %d",org);
	}
	else
	{
		printf("not a krishnamurthy number : %d",org);
	}
	return 0;
	
}












