#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0,fact=1.0;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum+=(double)i/fact;
	}
	printf("sumation : %f",sum);
	return 0;


}
















