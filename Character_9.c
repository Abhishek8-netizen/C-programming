#include <stdio.h>
int main()
{
	char a[20][20];
	int n;
	int i;

	printf("Enter n : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter a name : ");
		scanf("%s",a[i]);
	}

	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	printf("\n");

	return 0;
}
