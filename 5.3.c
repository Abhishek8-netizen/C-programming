/******************************************************************************

        Author      	: Abhishek Subramanian
        Roll No      	: 03
        Semester   	 	: 1
        Programme       : BSc CS(DA)
        Question    	: To keep a secret number between 20 and 30 and ask the user 
        		   		  to predict the number and display the number of attempts

*******************************************************************************/
#include <stdio.h>

int main()
{
	int secret = 26;
	int guess;
	int count = 0;
	
	do
	{
		printf("\nGuess the secret number between 20 and 30 : ");
		scanf("%d",&guess);
		if (guess != secret)
		{
			printf("Wrong! Try again...\n");
		}
		count++;
		
	}while(guess != secret);
	
	printf("\nCongratulations! You got it right");
	printf("\nNumber of attempts : %d",count);
	return 0;

}

