#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float a,b;
	
	printf("ENTER FIRST NUMBER : ");
	scanf("%f",&a);
	printf("ENTER SECOND NUMBER : ");
	scanf("%f",&b);
	
	printf("\n1. ADDITION");
	printf("\n2. SUBTRACTION");
	printf("\n3. MULTIPLICATION");
	printf("\n4. DIVISION");
	
	int c;
	printf("\nENTER YOUR CHOICE : ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("RESULT : %f",a+b);
			break;
			
		case 2:
		    printf("RESULT : %f",a-b);
			break;
			
		case 3:
		    printf("RESULT : %f",a*b);
			break;
			
		case 4:
			if(b!=0)
			{
		    printf("RESULT : %f",a/b);
	    	}
		    else
			{
				printf("DIVISION IS NOT POSSIBLE");
			}
		    break;
		    
		default:
			printf("INVALID CHOICE");
				
	}	
	return 0;
}

