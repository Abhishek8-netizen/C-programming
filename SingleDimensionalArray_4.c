#include <stdio.h>
int main()
{
	int a[50],n,key;
	int i = 0;
	int found = 0;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the value for a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	printf("\nEnter the value to be searched : ");
	scanf("%d",&key);

	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			found = 1;
		}
	}

	if(found == 1)
	{
		printf("\nFound\n");
	}
	else
	{
		printf("\nNot found\n");
	}
	return 0;
}






