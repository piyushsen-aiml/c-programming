#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float a,b;
	
	printf("ENTER A : ");
	scanf("%f",&a);
	printf("ENTER B : ");
	scanf("%f",&b);
	
	if(a>b)
	{
		printf("A IS MAXIMUM : %f",a);
	}
	else if(b>a)
	{
		printf("B IS MAXIMUM : %f",b);
	}
	else
	{
		printf("BOTH ARE EQUAL");
	}
	return 0;
	
}













