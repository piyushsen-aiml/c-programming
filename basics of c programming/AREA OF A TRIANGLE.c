#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float S1,S2,S3,S,area,S4;
	
	printf("ENTER FIRST SIDE : ");
	scanf("%f",&S1);
	printf("ENTER SECOND NUMBER : ");
	scanf("%f",&S2);
	printf("ENTER THIRD NUMBER : ");
	scanf("%f",&S3);
	
	S=(S1+S2+S3)/2;
	
	S4=S*(S-S1)*(S-S2)*(S-S3);
	area=sqrt(S4);
	printf("AREA OF TRIANGLE : %f",area);
	
	return 0;
	
	
	
	
	
}
















