#include <stdio.h>
#include <string.h>
int main()
{
	FILE *f;
	char a[20];
	char c;
	int word_total = 0;
	int line_total = 0;
	int letter_total = 0;
	int word_len;
	
	f=fopen("demo.txt","r");
	
	if(f==NULL)
	{
		printf("\nError...file not found");
	}
	else
	{
		while(!feof(f))
		{
			fscanf(f,"%s",a);
			fscanf(f,"%c",&c);
			
			if(c=='\n')
			{
				line_total = line_total + 1;
			}
			
			word_total = word_total + 1;
			word_len = strlen(a);
			letter_total = letter_total + word_len;
		}
	printf("\nNumber of words : %d",word_total);
	printf("\nNumber of characters : %d",letter_total);
	printf("\nNumber of lines : %d\n",line_total);
	fclose(f);
	}
	return 0;
}
