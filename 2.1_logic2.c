/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	    : 1
        Programme       : BSc CS(DA)
        Question    	: Program to find the maximum of two numbers using if-else

*******************************************************************************/

#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	if (a>b)
	{
		printf("\nThe maximum number is %d",a);
	}
	else
	{
		printf("\nThe maximum number is %d",b);
	}
	return 0;
}

