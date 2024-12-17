/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Display 1 to n and n to 1 using two for loops, where n is a positive 
		   				  integer given by the user.
*******************************************************************************/
#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter n : ");
	scanf("%d",&n);
	
	if (n < 0)
	{
		printf("\nEnter a positive number");
	}
	else
	{
		printf("1 to %d : \n\n",n);
		for (i=1;i<=n;i++)
		{
			printf("%d\t",i);
		}
		
		printf("\n\n%d to 1 : \n\n",n);
		for (i=n;i>=1;i--)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}

