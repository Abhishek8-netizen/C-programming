#include <stdio.h>
int main()
{
	int a[20],n,i;
	int max = 0;

	printf("Enter n : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter an integer element : ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}

	printf("\nThe maximum number is %d\n",max);
	return 0;
}
