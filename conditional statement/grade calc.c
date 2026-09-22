#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float a,b,c,d,e,x,y;
	
	printf("MARKS OBTAINED IN MATHEMATICS : ");
	scanf("%f",&a);
	printf("MARKS OBTAINED IN PHYSICS : ");
	scanf("%f",&b);
	printf("MARKS OBTAINED IN CHEMISTRY : ");
	scanf("%f",&c);
	printf("MARKS OBTAINED IN ENGLISH : ");
	scanf("%f",&d);
	printf("MARKS OBTAINED IN BIOLOGY : ");
	scanf("%f",&e);
	
	x=a+b+c+d+e;
	y=((x/500)*100);
	
	printf("TOTAL MARKS : %f",x);
	printf("\npercentage : %f",y);
	
	if((y>=90)&&(y<=100))
	{
		printf("\nGRADE A");
	}
	else if((y>=80)&&(y<90))
	{
		printf("\nGRADE B");
	}
	else if((y>=70)&&(y<80))
	{
		printf("\nGRADE C");
	}
	else if((y>=60)&&(y<70))
	{
		printf("\nGRADE D");
	}
	else if((y>=50)&&(y<60))
	{
		printf("\nGRADE E");
	}
	else 
	{
		printf("\nGRADE F");
	}
	return 0;
}


























