#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float S1,S2,S3,S,area;
	
	printf("ENTER FIRST SIDE : ");
	scanf("%f",&S1);
	printf("ENTER SECOND NUMBER : ");
	scanf("%f",&S2);
	printf("ENTER THIRD NUMBER : ");
	scanf("%f",&S3);
	
	S=(S1+S2+S3)/2;
	
	area=S*(S-S1)*(S-S2)*(S-S3);
	printf("AREA OF TRIANGLE : %f",area);
	
	return 0;
	
	
	
	
	
}
















