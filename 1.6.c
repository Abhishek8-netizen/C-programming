/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to convert Fahrenheit to Centigrade  

*******************************************************************************/
#include <stdio.h>

int main()
{
	float c,f;
	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f",&f);
	c = (f - 32) * 5/9;
	printf("\nThe temperature in Celsius is %f",c);
	return 0;
}

