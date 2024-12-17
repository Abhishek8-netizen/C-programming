#include <stdio.h>
int main()
{
	char a[20],search,replace;
	int i;
	int n = 0;
	int flag = 0;
	printf("Enter a string : ");
	scanf("%s",a);
	while(a[n]!='\0')
	{
		n++;
	}
	printf("\nEnter the character to be replaced : ");
	scanf(" %c",&search);
	printf("\nEnter the replacement character : ");
	scanf(" %c",&replace);

	for(i=0;i<n;i++)
	{
		if(a[i] == search)
		{
			flag = 1;
			a[i] = replace;
		}
	}
	if(flag == 0)
	{
		printf("\nCharacter '%c' not found in string\n",search);
	}
	else
	{
		printf("\nNew string : %s",a);
	}
	return 0;
}
