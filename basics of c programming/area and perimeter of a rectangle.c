#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float l,b,area,perimeter;
	
	printf("ENTER LENGTH in : ");
	scanf("%f",&l);
	printf("ENTER BREADTH in : ");
	scanf("%f",&b);
	
	area=l*b;
	perimeter = 2*(l+b);
	
	printf("area : %f",area);
	printf("\nperimeter : %f",perimeter);
	
	return 0;
	
	
	
	
	
}
















