#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=65;j<=65+n;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}


















