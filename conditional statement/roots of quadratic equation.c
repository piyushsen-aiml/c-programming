#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float a,b,c,d,r1,r2,real,img;
	
	printf("ENTER THE COEFFICIENT A : ");
	scanf("%f",&a);
	printf("ENTER THE COEFFICIENT B : ");
	scanf("%f",&b);
	printf("ENTER THE COEFFICIENT C : ");
	scanf("%f",&c);
	
	d=b*b-4*a*c;
	
	if(d>0)
	{
		r1=(-b+sqrt(d)) / 2*a;
		r2=(-b-sqrt(d)) / 2*a;
		printf("\nROOT 1 : %2f",r1);
		printf("\nROOT 2 : %2f",r2);
	}
	else if(d==0)
	{
	r1=r2=-b/(2*a);
	printf("\nROOT 1 = ROOT 2 = %2f",r1);
    }
	else
	{
		printf("ROOTS ARE COMPLEX AND IMAGINARY");
	}
	return 0;

}

















