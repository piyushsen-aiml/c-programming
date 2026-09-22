#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float a,b,c;
	
	printf("ENTER A : ");
	scanf("%f",&a);
	printf("ENTER B : ");
	scanf("%f",&b);
	printf("ENTER C : ");
	scanf("%f",&c);
	
	if((a>b)&&(a>c))
	{
		printf("A IS MAXIMUM : %f",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("B IS MAXIMUM : %f",b);
	}
	else if((c>a)&&(c>b))
	{
		printf("C IS MAXIMUM : %f",c);
	}
	else
	{
		printf("ALL ARE EQUAL");
	}
	return 0;

}































