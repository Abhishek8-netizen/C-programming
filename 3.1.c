/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Find the difference of two given number using while loop
*******************************************************************************/
#include <stdio.h>
int main()
{
	int a,b,r;
	int i = 0;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	r = a>b?1:2;
	
	while(a!=b)
	{
		if (r==1)
		{
			b++;
			i++;
		}
		else if (r==2)
		{
			a++;
			i++;	
		}
		
	}
	printf("\nDifference : %d",i);
	return 0;
}

