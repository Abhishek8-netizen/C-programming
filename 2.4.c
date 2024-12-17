/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	    : 1
        Programme       : BSc CS(DA)
        Question    	: Program to check if the given number is positive, negative or zero

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	if (a > 0)
	{
		printf("\n%d is a positive number",a);
	}
	else if (a < 0)
	{
		printf("\n%d is a negative number",a);
	}
	else
	{
		printf("\n%d is ZERO",a);
	}
	return 0;
}

