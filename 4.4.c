/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the sum of 1 + 2/2! + 3/3! + 4/4! + …. + n/n! using a single for loop
*******************************************************************************/
#include <stdio.h>

int main()
{
	float n,i;
	float f = 1;
	float sum = 1;
	printf("Enter n : ");
	scanf("%f",&n);
	
	for (i=2;i<=n;i++)
	{
		f = f * i;
		sum = sum + (i/f);
	}
	printf("\nSum of 1 + 2/2! + 3/3! + 4/4! + ... + n/n! : %f",sum);
	return 0;
}	





