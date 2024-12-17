/******************************************************************************
        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: Print the multiplication table of the given number from 1 to 10.
*******************************************************************************/
#include <stdio.h>

int main()
{
	int num;
	int i = 1;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	while (i<=10)
	{
		printf("\n%d * %d = %d",num,i,num*i);
		i++;
	}
	return 0;
}

