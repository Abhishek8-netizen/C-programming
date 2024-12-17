/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the sum of first n numbers using while loop
*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,sum;
	printf("Enter n : ");
	scanf("%d",&n);
	int i = 1;
	 
	while (i<=n)
	{
		sum = sum + i;
		i++;
	}
	 
	printf("Sum of first %d numbers : %d",n,sum);
	return 0;
}

