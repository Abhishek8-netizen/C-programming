#include <stdio.h>
int main()
{
	int a[20][20];
	int sum,row,column,i,j;
	
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	printf("Enter the number of columns : ");
	scanf("%d",&column);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	for(i=0;i<row;i++)
	{
		sum = 0;
		for(j=0;j<column;j++)
		{
			sum = sum + a[i][j];
		}
		printf("Row %d : %d\n",i+1,sum);
	}
	printf("\n\n");
	for(i=0;i<row;i++)
	{
		sum = 0;
		for(j=0;j<column;j++)
		{
			sum = sum + a[j][i];
		}
		printf("Column %d : %d\n",i+1,sum);
	}
	return 0;
}
