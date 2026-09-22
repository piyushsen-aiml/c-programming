#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float a,b,c,d,e;
	
	printf("ENTER A : ");
	scanf("%f",&a);
	printf("ENTER B : ");
	scanf("%f",&b);
	printf("ENTER C : ");
	scanf("%f",&c);
	printf("ENTER D : ");
	scanf("%f",&d);
	printf("ENTER E : ");
	scanf("%f",&e);

	if((a>b)&&(a>c)&&(a>d)&&(a>e))
	{
		printf("A IS MAXIMUM : %f",a);
	}
	else if((b>a)&&(b>c)&&(b>d)&&(b>e))
	{
		printf("B IS MAXIMUM : %f",b);
	}
	else if((c>a)&&(c>b)&&(c>d)&&(c>e))
	{
		printf("C IS MAXIMUM : %f",c);
	}
	else if((d>a)&&(d>b)&&(d>c)&&(d>e))
	{
		printf("D IS MAXIMUM : %f",d);
	}
	else if((e>a)&&(e>b)&&(e>c)&&(e>d))
	{
		printf("E IS MAXIMUM : %f",e);
	}
	else
	{
		printf("ALL ARE EQUAL");
	}
	return 0;
}



































