/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the sum of 1+(1+2) + (1+2+3) + …. + (1+2+3+...+n) using a single 
						  while loop
*******************************************************************************/
#include <stdio.h>
int main()
{
	float n;
	float i = 1;
	float sum = 0;
	printf("Enter n : ");
	scanf("%f",&n);
	while (i<=n)
	{
		sum = sum + ((i / 2)*(2*1 + (i - 1)*1));
		i++;
	}
	printf("\nResult of 1+(1+2)+(1+2+3)+...+(1+2+3+...+n) : %f",sum);
	return 0;
}



