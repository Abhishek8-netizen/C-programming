#include <stdio.h>
int main()
{
	int a[50],n,i;
	int max = 0;
	int secmax = 0;

	printf("Enter n : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the value for a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<max)
		{
			if(a[i]>secmax)
			{
				secmax = a[i];
			}
		}
	}
	printf("\nThe second largest number is %d\n",secmax);
	return 0;
}









