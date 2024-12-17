#include <stdio.h>
int main()
{
	int a[20],n,i;

	printf("Enter n : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter an integer element : ");
		scanf("%d",&a[i]);
	}

	printf("\n");
	for(i=1;i<n;i=i+2)
	{
		printf("%d\t",a[i]);
	}

	for(i=0;i<n;i=i+2)
	{
		printf("%d\t",a[i]);
	}

	return 0;
}
