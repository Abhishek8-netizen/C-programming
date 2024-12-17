/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	    : 1
        Programme       : BSc CS(DA)
        Question    	: Program to find the maximum of three numbers using if-else 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a,b,c,max;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("Enter the third number : ");
	scanf("%d",&c);
	if (a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	printf("\nThe maximum number is %d",max);
	return 0;
}

