/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	    : 1
        Programme       : BSc CS(DA)
        Question    	: Program to check if a given number is odd or even

*******************************************************************************/
#include <stdio.h>
int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	if (a % 2 == 0)
	{
		printf("\n%d is an even number",a);
	}
	else
	{
		printf("\n%d is an odd number",a);
	}
	return 0;
}

