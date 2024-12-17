/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	    : 1
        Programme       : BSc CS(DA)
        Question    	: Program to read two numbers and interchange the values without using a third 
		  				  variable
*******************************************************************************/
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\nBefore interchanging : a = %d | b = %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter interchanging : a = %d | b = %d\n",a,b);
	return 0;
}


