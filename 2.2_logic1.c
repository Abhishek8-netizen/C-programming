/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	    : 1
        Programme       : BSc CS(DA)
        Question    	: Program to find the maximum of three numbers using conditional operator 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a,b,c,result;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("Enter the third number : ");
	scanf("%d",&c);
	result = a>b?(a>c?a:c):(b>c?b:c);
	printf("\nThe maximum number is %d",result);
	return 0;
}

