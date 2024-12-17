/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to convert kilometers per hour to miles per hour

*******************************************************************************/
#include <stdio.h>

int main()
{
	float kph,mph;
	printf("Enter the speed in kilometers per hour : ");
	scanf("%f",&kph);
	mph = kph * 0.621371;
	printf("\nThe speed in the miles per hour is %f",mph);
	return 0;
}

