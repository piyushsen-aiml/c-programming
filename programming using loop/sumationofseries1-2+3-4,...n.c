#include<stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
		else
		{
			sum-=i;
		}
	}
	printf("THE SUM OF THE SERIES FROM 1 TO n is : %d",sum);
	return 0;
	
}


























