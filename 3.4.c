/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the sum of n given numbers using a while loop
*******************************************************************************/
#include <stdio.h>
int main()
{
	int i = 1;
	int n,num;
	int sum = 0;
	printf("Enter n : ");
	scanf("%d",&n);
	
	while (i<=n)
	{
		printf("Enter the number : ");
		scanf("%d",&num);
		sum = sum + num;
		i++;
	}
	printf("\nSum of the %d numbers you entered : %d",n,sum);
	return 0;
}

