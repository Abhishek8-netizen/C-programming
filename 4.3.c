/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the sum of 1+2! +3!+...+n! using one for loop.
*******************************************************************************/
#include <stdio.h>
int main()
{
	int n,i;
	int f = 1;
	int sum = 1;
	printf("Enter n : ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		f = f * i;
		sum = sum + f;
	}
	printf("\nSum of 1+2!+3!+...+n! : %d",sum);
	return 0;
}




