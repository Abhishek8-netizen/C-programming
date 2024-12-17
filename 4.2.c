/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the factorial of a given number
*******************************************************************************/
#include <stdio.h>
int main()
{
	int num,i;
	int f = 1;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		f = f * i;
	}
	printf("\nFactorial of %d : %d",num,f);
}

