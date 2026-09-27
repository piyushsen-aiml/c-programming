#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	char a;
	
	printf("ENTER ANY CHARACTER VALUE : ");
	scanf("%c",&a);
	
	a=toupper(a);
	
	switch(a)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			
		printf("vowel");
		break;
			
		default:
			printf("CONSONENT");
			break;
	

	}
    return 0;
}


























