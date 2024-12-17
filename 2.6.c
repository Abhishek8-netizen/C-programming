#include <stdio.h>
int main()
{
	int day;
	printf("Enter a positive number : ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("\nDay 1 : Monday");
			break;
		case 2:
			printf("\nDay 2 : Tuesday");
			break;
		case 3:
			printf("\nDay 3 : Wednesday");
			break;
		case 4:
			printf("\nDay 4 : Thursday");
			break;
		case 5:
			printf("\nDay 5 : Friday");
			break;
		case 6:
			printf("\nDay 6 : Saturday");
			break;
		case 7:
			printf("\nDay 7 : Sunday");
			break;
		default:
			printf("\nOnly seven days in a week");
	}
	return 0;
}
