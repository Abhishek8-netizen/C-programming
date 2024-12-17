#include <stdio.h>
int main()
{
	char a[20];
	int len = 0;

	printf("Enter a string : ");
	scanf("%s",a);

	while(a[len]!='\0')
	{
		len++;
	}

	printf("\nThe length of the string is %d\n",len);
	return 0;
}
