/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the reverse of a given number
*******************************************************************************/
#include <stdio.h>

int main()
{
	int num,r;
	int s = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	while (num > 0)
	{
		r = num % 10;
		s = (s * 10) + r;
		num = num / 10;
	}
	printf("\nReversed : %d",s);
	return 0;
}

