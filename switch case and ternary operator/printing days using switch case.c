#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	int a;
	
	printf("ENTER ANY NUMBER BETWEEN 1 TO 7 : ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("SUNDAY");
			break;
			
		case 2:
			printf("MONDAY");
			break;
			
		case 3:
			printf("TUESDAY");
			break;
			
		case 4:
			printf("WEDNESDAY");
			break;
			
		case 5:
			printf("THURSDAY");
			break;
			
		case 6:
			printf("FRIDAY");
			break;
			
	    case 7:
	    	printf("SATURDAY");
	    	break;
	    	
	    default:
	    	printf("INVALID NUMBER");
	    	break;

	}
	return 0;
}


































