#include<stdio.h>;
#include<math.h>
#include<conio.h>

int main()
{
	float p,r,t,SI;
	
	printf("ENTER THE PRINCIPLE AMOUNT : ");
	scanf("%f",&p);
	printf("ENTER RATE OF INTEREST : ");
	scanf("%f",&r);
	printf("ENTER TIME IN YEARS : ");
	scanf("%f",&t);
	
	SI=(p*r*t)/100;
	printf("SIMPLE INTEREST : %f",SI);
	
	return 0;

}



















