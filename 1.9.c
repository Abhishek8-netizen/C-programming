/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program to find third angle of a triangle if two angles are given

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the first angle : ");
	scanf("%d",&a);
	printf("Enter the second angle : ");
	scanf("%d",&b);
	c = 180 - (a+b);
	printf("\nThe third angle is %d",c);
	return 0;
}

