#include<stdio.h>
int main()
{
	int i,n,count=0;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	if(n>1)
	{
		for(i=2;i<n;i++)
		{
		if(n%i==0)
		count++;
	    }
    }
	if(count==0)
	{
		printf("prime number");
	}
	else 
	{
		printf("not a prime number");
	}
	return 0;
}
















