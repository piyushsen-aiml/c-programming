#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	int a,b,c,d;
	
	printf("ENTER FIRST NUMBER : ");
	scanf("%d",&a);
	printf("ENTER SECOND NUMBER : ");
	scanf("%d",&b);
	printf("ENTER THIRD NUMBER : ");
	scanf("%d",&c);
	
	d=(a>b)?(a>c?a:c) : (b>c?b:c);
	printf("LARGEST NUMBER IS : %d",d);
	return 0;

}








