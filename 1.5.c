/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to convert Centigrade to Fahrenheit

*******************************************************************************/
#include <stdio.h>

int main()
{
	float c,f;
	printf("Enter the temperature in Celsius : ");
	scanf("%f",&c);
	f = 9 * c / 5 +32;
	printf("\nThe temperature in Fahrenheit is %f",f);
	return 0;
}

