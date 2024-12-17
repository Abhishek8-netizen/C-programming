#include <stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],row,column;
	int i,j;

	printf("Enter the number of rows : ");
	scanf("%d",&row);
	printf("Enter the number of columns : ");
	scanf("%d",&column);

	printf("\nFirst matrix : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Enter the value for a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nSecond matrix : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Enter the value for b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}

	}
	printf("\nMatrix a : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix b : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	printf("\nSum : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}


