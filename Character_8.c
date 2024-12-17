#include <stdio.h>
int main()
{
	char a[50],b[50];
	int i = 0;
	int j = 0;
	int n;

	printf("Enter the first string : ");
	scanf("%s",a);
	printf("Enter the second string : ");
	scanf("%s",b);

	while(a[i]!='\0')
	{
		i++;
	}

	while(b[j]!='\0')
	{
		j++;
	}

	for(n=0;n<j;n++)
	{
		a[i+n] = b[n];
	}

	printf("\nNew string : %s\n",a);
	return 0;
}


