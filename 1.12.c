/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program for menu driven bitwise operators

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a,b,choice;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\n a = %d and b = %d\n",a,b);
	
	printf("\n1. Bitwise AND operation");
	printf("\n2. Bitwise OR operation");
	printf("\n3. Bitwise XOR operation");
	printf("\n4. Compute the negation\n");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	if (choice == 1)
	{
		printf("\nResult of bitwise AND (&) operation : %d",a & b);
	}
	else if (choice == 2)
	{
		printf("\nResult of bitwise OR (|) operation : %d",a | b);
	}
	else if (choice == 3)
	{
		printf("\nResult of bitwise XOR operation : %d",a ^ b);
	}
	else if (choice == 4)
	{
		printf("\nThe negation of %d (!a) : %d",a,!a);
		printf("\nThe negation of %d (!b) : %d",b,!b);
	}
	return 0;
}

