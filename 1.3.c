/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to compute the perimeter and area of a circle with a given radius

*******************************************************************************/
#include <stdio.h>

int main()
{
	float radius,circum,area;
	printf("Enter the radius : ");
	scanf("%f",&radius);
	circum = 2 * 3.14 * radius;
	area = 3.14 * radius * radius;
	printf("\nCircumference : %f",circum);
	printf("\nArea : %f",area);
	return 0;
}

