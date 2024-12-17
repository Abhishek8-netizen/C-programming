/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme   	: BSc CS(DA)
        Question    	: Program that takes minutes as input and displays the total number of hours and 
		  				  minutes

*******************************************************************************/
#include <stdio.h>

int main()
{
	int min,hour;
	printf("Enter the time in minutes : ");
	scanf("%d",&min);
	hour = min / 60;
	min = min % 60;
	printf("\n%d hours : %d minutes",hour,min);
	return 0;
}

