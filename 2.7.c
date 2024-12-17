#include <stdio.h>
int main()
{
	int choice,a,b;
	printf("\n1.Bitwise AND");
	printf("\n2.Bitwise OR");
	printf("\n3.Bitwise XOR\n");
	printf("\nEnter choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter first number : ");
			scanf("%d",&a);
			printf("Enter second number : ");
			scanf("%d",&b);
			printf("\nResult of Bitwise AND : %d",a&b);
			break;
		case 2:
			printf("\nEnter first number : ");
			scanf("%d",&a);
			printf("Enter second number : ");
			scanf("%d",&b);
			printf("\nResult of Bitwise OR : %d",a|b);
			break;
		case 3:
			printf("\nEnter first number : ");
			scanf("%d",&a);
			printf("Enter second number : ");
			scanf("%d",&b);
			printf("\nResult of Bitwise XOR : %d",a^b);
			break;
		default:
			printf("\nInvalid entry");

	}
	return 0;
}
