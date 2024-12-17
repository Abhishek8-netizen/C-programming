/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to read two numbers and interchange the values using a third variable

*******************************************************************************/
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\nBefore interchanging : a = %d | b = %d\n",a,b);
	c = a ; a = b ; b = c;
	printf("\nAfter interchanging : a = %d | b = %d\n",a,b);
	return 0;
}

