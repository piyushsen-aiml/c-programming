#include<stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("ENTER NUMBER n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf("THE SUM OF THE SQUARE OF THE SERIES FROM 1 TO n : %d",sum);
	return 0;
	
}
















