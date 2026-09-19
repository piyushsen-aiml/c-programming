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
	
	c=a;
	a=b;
	b=c;
	
	printf("AFTER SWAPPING VALUE OF A : %f",a);
	printf("\nAFTER SWAPPING VALUE OF B : %f",b);	



   return 0;	
}





















