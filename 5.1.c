/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Check if a number is prime or not

*******************************************************************************/
#include <stdio.h>
int main()
{
	int num,r;
	printf("Enter a number : ");
	scanf("%d",&num);
	int j = 2;
	do
	{
		r = num % j;
		j++;
	}while (r!=0 && j<num);
	
	if (r == 0)
	{
		printf("\n%d is not a prime number",num);
	}
	else
	{
		printf("\n%d is a prime number",num);
	}
	return 0;
}

