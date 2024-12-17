/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme 		: BSc CS(DA)
        Question    	: Program to find the maximum of two numbers using conditional operator

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a,b,result;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	result = a>b?a:b;
	printf("\nThe maximum number is %d",result);
	return 0;
}

