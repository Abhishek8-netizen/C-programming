/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to encode your age with your roll number and decode the same using 
		  				  bitwise XOR operator

*******************************************************************************/
#include <stdio.h>

int main()
{
	int age,roll,code;
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your roll no : ");
	scanf("%d",&roll);
	code = age ^ roll;
	printf("\nYour age is %d",code ^ roll);
	printf("\nYour roll number is %d",code ^ age);
	return 0;
}

