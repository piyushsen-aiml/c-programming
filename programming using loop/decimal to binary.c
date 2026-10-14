#include<stdio.h>
int main()
{
	int binary=0,decimal,base=1,rem;
	
	printf("enter decimal number : ");
	scanf("%d",&decimal);
	
	while(decimal>0)
	{
		rem=decimal%2;
		binary=binary+rem*base;
		base=base*10;
		decimal=decimal/2;	
	}
	
	printf("binary number is : %d",binary);
	return 0;
}


















