/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: To find if given number is an Armstrong number or not

*******************************************************************************/
#include <stdio.h>
int main()
{
	int num,sec,i,r;
	int n = 0;
	int sum = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	sec = num;
	
	for(i=sec;i!=0;n++)
	{
		i = i / 10;
	}
	
	do
	{
		r = sec % 10;
		sum = sum + (pow(r,n));
		sec = sec / 10;
	}while(sec > 0);
	
	if (sum == num)
	{
		printf("\n%d is an Armstrong number",num);
	}
	else
	{
		printf("\n%d is not an Armstrong number",num);
	}
	return 0;
}

