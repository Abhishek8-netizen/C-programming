/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to compute the perimeter and area of a rectangle

*******************************************************************************/
#include <stdio.h>

int main()
{
	float length,breadth,perimeter,area;
	printf("Enter the length : ");
	scanf("%f",&length);
	printf("Enter the breadth : ");
	scanf("%f",&breadth);
	perimeter = 2 * (length + breadth);
	area = length * breadth;
	printf("\nPerimeter : %f\n",perimeter);
	printf("\nArea : %f\n",area);
	return 0;
}

