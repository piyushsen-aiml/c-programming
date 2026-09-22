#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	int year;
	
	printf("ENTER YEAR IN 4 DIGIT : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("IT's A LEAP YEAR");
	}
	else
	{
		printf("IT's NOT A LEAP YEAR");
	}
	return 0;
	
}
















