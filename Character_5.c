#include <stdio.h>
int main()
{
	char a[20];
	int i;
	int n  = 0;

	printf("Enter a string : ");
	scanf("%s",a);

	while(a[n]!='\0')
	{
		n++;
	}

	printf("\nReversed string : ");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	printf("\n");

	return 0;
}

